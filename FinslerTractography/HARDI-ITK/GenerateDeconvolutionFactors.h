// Generate the sharpening factors used to avoid the low-pass filtering
// due to the integration inside a disk. Use the matlab function:
//
//    GenerateSharpenFactors.m
//
// provided with this software package to pre-calculate the numbers provided.
//
//   NOTE: Only degrees up to L=8 will be computed!!!

#ifndef __GenerateDeconvolutionFactors_h
#define __GenerateDeconvolutionFactors_h

namespace finsler_auxiliars{
    
    template< class StorageType, class VectorType >
    bool GenerateDeconvolutionFactors( StorageType& factors, VectorType& bD, const unsigned int L )
    {
        const unsigned int resolution = 40;
        
        bD.resize( resolution );
        bD[0]=0.10000000; bD[1]=0.11937766; bD[2]=0.14251027; bD[3]=0.17012543; bD[4]=0.20309176; 
        bD[5]=0.24244620; bD[6]=0.28942661; bD[7]=0.34551073; bD[8]=0.41246264; bD[9]=0.49238826; 
        bD[10]=0.58780161; bD[11]=0.70170383; bD[12]=0.83767764; bD[13]=1.00000000; bD[14]=1.19377664; 
        bD[15]=1.42510267; bD[16]=1.70125428; bD[17]=2.03091762; bD[18]=2.42446202; bD[19]=2.89426612; 
        bD[20]=3.45510729; bD[21]=4.12462638; bD[22]=4.92388263; bD[23]=5.87801607; bD[24]=7.01703829; 
        bD[25]=8.37677640; bD[26]=10.00000000; bD[27]=11.93776642; bD[28]=14.25102670; bD[29]=17.01254280; 
        bD[30]=20.30917621; bD[31]=24.24462017; bD[32]=28.94266125; bD[33]=34.55107295; bD[34]=41.24626383; 
        bD[35]=49.23882632; bD[36]=58.78016072; bD[37]=70.17038287; bD[38]=83.76776401; bD[39]=100.00000000;
        
        factors.resize( resolution );
        for( unsigned int k=0; k<resolution; ++k ){
            factors[k].resize( L/2+1 );
            factors[k][0] = 1;
        }
        
        if( L==0 ){ // No need to fill any value
        }
        else if( L==2 ){
            factors[0][1] = 51.07449534; 
            factors[1][1] = 42.95896635; 
            factors[2][1] = 36.16097339; 
            factors[3][1] = 30.46668829; 
            factors[4][1] = 25.69699816; 
            factors[5][1] = 21.70187114; 
            factors[6][1] = 18.35563668; 
            factors[7][1] = 15.55303190; 
            factors[8][1] = 13.20588952; 
            factors[9][1] = 11.24036311; 
            factors[10][1] = 9.59460225; 
            factors[11][1] = 8.21680429; 
            factors[12][1] = 7.06358127; 
            factors[13][1] = 6.09859036; 
            factors[14][1] = 5.29138471; 
            factors[15][1] = 4.61644839; 
            factors[16][1] = 4.05238527; 
            factors[17][1] = 3.58123711; 
            factors[18][1] = 3.18791051; 
            factors[19][1] = 2.85969700; 
            factors[20][1] = 2.58587413; 
            factors[21][1] = 2.35737846; 
            factors[22][1] = 2.16654260; 
            factors[23][1] = 2.00688825; 
            factors[24][1] = 1.87296445; 
            factors[25][1] = 1.76021764; 
            factors[26][1] = 1.66487953; 
            factors[27][1] = 1.58386195; 
            factors[28][1] = 1.51465433; 
            factors[29][1] = 1.45522555; 
            factors[30][1] = 1.40393458; 
            factors[31][1] = 1.35945350; 
            factors[32][1] = 1.32070386; 
            factors[33][1] = 1.28680561; 
            factors[34][1] = 1.25703662; 
            factors[35][1] = 1.23080093; 
            factors[36][1] = 1.20760378; 
            factors[37][1] = 1.18703208; 
            factors[38][1] = 1.16873891; 
            factors[39][1] = 1.15243138; 
        }
        else if( L==4 ){
            factors[0][1] = 51.07449534; factors[0][2] = 4328.60854535; 
            factors[1][1] = 42.95896635; factors[1][2] = 3055.08135624; 
            factors[2][1] = 36.16097339; factors[2][2] = 2158.63896969; 
            factors[3][1] = 30.46668829; factors[3][2] = 1527.25166476; 
            factors[4][1] = 25.69699816; factors[4][2] = 1082.23517642; 
            factors[5][1] = 21.70187114; factors[5][2] = 768.31515867; 
            factors[6][1] = 18.35563668; factors[6][2] = 546.65380242; 
            factors[7][1] = 15.55303190; factors[7][2] = 389.95513652; 
            factors[8][1] = 13.20588952; factors[8][2] = 279.02911933; 
            factors[9][1] = 11.24036311; factors[9][2] = 200.37954604; 
            factors[10][1] = 9.59460225; factors[10][2] = 144.51053446; 
            factors[11][1] = 8.21680429; factors[11][2] = 104.73738516; 
            factors[12][1] = 7.06358127; factors[12][2] = 76.35148756; 
            factors[13][1] = 6.09859036; factors[13][2] = 56.03376790; 
            factors[14][1] = 5.29138471; factors[14][2] = 41.44262966; 
            factors[15][1] = 4.61644839; factors[15][2] = 30.92441143; 
            factors[16][1] = 4.05238527; factors[16][2] = 23.30987893; 
            factors[17][1] = 3.58123711; factors[17][2] = 17.77114061; 
            factors[18][1] = 3.18791051; factors[18][2] = 13.72100737; 
            factors[19][1] = 2.85969700; factors[19][2] = 10.74217397; 
            factors[20][1] = 2.58587413; factors[20][2] = 8.53736014; 
            factors[21][1] = 2.35737846; factors[21][2] = 6.89419001; 
            factors[22][1] = 2.16654260; factors[22][2] = 5.66044240; 
            factors[23][1] = 2.00688825; factors[23][2] = 4.72660472; 
            factors[24][1] = 1.87296445; factors[24][2] = 4.01357392; 
            factors[25][1] = 1.76021764; factors[25][2] = 3.46398310; 
            factors[26][1] = 1.66487953; factors[26][2] = 3.03607520; 
            factors[27][1] = 1.58386195; factors[27][2] = 2.69935756; 
            factors[28][1] = 1.51465433; factors[28][2] = 2.43149673; 
            factors[29][1] = 1.45522555; factors[29][2] = 2.21608009; 
            factors[30][1] = 1.40393458; factors[30][2] = 2.04099214; 
            factors[31][1] = 1.35945350; factors[31][2] = 1.89723538; 
            factors[32][1] = 1.32070386; factors[32][2] = 1.77807706; 
            factors[33][1] = 1.28680561; factors[33][2] = 1.67843460; 
            factors[34][1] = 1.25703662; factors[34][2] = 1.59443426; 
            factors[35][1] = 1.23080093; factors[35][2] = 1.52309419; 
            factors[36][1] = 1.20760378; factors[36][2] = 1.46209608; 
            factors[37][1] = 1.18703208; factors[37][2] = 1.40961975; 
            factors[38][1] = 1.16873891; factors[38][2] = 1.36422247; 
            factors[39][1] = 1.15243138; factors[39][2] = 1.32475028;
        }
        else if( L==6 ){
            factors[0][1] = 51.07449534; factors[0][2] = 4328.60854535; factors[0][3] = 532477.87662533; 
            factors[1][1] = 42.95896635; factors[1][2] = 3055.08135624; factors[1][3] = 315255.63143397; 
            factors[2][1] = 36.16097339; factors[2][2] = 2158.63896969; factors[2][3] = 186851.13038382; 
            factors[3][1] = 30.46668829; factors[3][2] = 1527.25166476; factors[3][3] = 110903.23219752; 
            factors[4][1] = 25.69699816; factors[4][2] = 1082.23517642; factors[4][3] = 65941.09061753; 
            factors[5][1] = 21.70187114; factors[5][2] = 768.31515867; factors[5][3] = 39291.00870938; 
            factors[6][1] = 18.35563668; factors[6][2] = 546.65380242; factors[6][3] = 23471.37884259; 
            factors[7][1] = 15.55303190; factors[7][2] = 389.95513652; factors[7][3] = 14063.83807317; 
            factors[8][1] = 13.20588952; factors[8][2] = 279.02911933; factors[8][3] = 8457.36049352; 
            factors[9][1] = 11.24036311; factors[9][2] = 200.37954604; factors[9][3] = 5107.61409473; 
            factors[10][1] = 9.59460225; factors[10][2] = 144.51053446; factors[10][3] = 3100.18021542; 
            factors[11][1] = 8.21680429; factors[11][2] = 104.73738516; factors[11][3] = 1892.90128524; 
            factors[12][1] = 7.06358127; factors[12][2] = 76.35148756; factors[12][3] = 1163.82303841; 
            factors[13][1] = 6.09859036; factors[13][2] = 56.03376790; factors[13][3] = 721.39723676; 
            factors[14][1] = 5.29138471; factors[14][2] = 41.44262966; factors[14][3] = 451.40897240; 
            factors[15][1] = 4.61644839; factors[15][2] = 30.92441143; factors[15][3] = 285.57809237; 
            factors[16][1] = 4.05238527; factors[16][2] = 23.30987893; factors[16][3] = 182.96126047; 
            factors[17][1] = 3.58123711; factors[17][2] = 17.77114061; factors[17][3] = 118.92051529; 
            factors[18][1] = 3.18791051; factors[18][2] = 13.72100737; factors[18][3] = 78.56902302; 
            factors[19][1] = 2.85969700; factors[19][2] = 10.74217397; factors[19][3] = 52.86929482; 
            factors[20][1] = 2.58587413; factors[20][2] = 8.53736014; factors[20][3] = 36.30510711; 
            factors[21][1] = 2.35737846; factors[21][2] = 6.89419001; factors[21][3] = 25.48869263; 
            factors[22][1] = 2.16654260; factors[22][2] = 5.66044240; factors[22][3] = 18.32489066; 
            factors[23][1] = 2.00688825; factors[23][2] = 4.72660472; factors[23][3] = 13.50775009; 
            factors[24][1] = 1.87296445; factors[24][2] = 4.01357392; factors[24][3] = 10.21612054; 
            factors[25][1] = 1.76021764; factors[25][2] = 3.46398310; factors[25][3] = 7.92872382; 
            factors[26][1] = 1.66487953; factors[26][2] = 3.03607520; factors[26][3] = 6.31122144; 
            factors[27][1] = 1.58386195; factors[27][2] = 2.69935756; factors[27][3] = 5.14683350; 
            factors[28][1] = 1.51465433; factors[28][2] = 2.43149673; factors[28][3] = 4.29341167; 
            factors[29][1] = 1.45522555; factors[29][2] = 2.21608009; factors[29][3] = 3.65665787; 
            factors[30][1] = 1.40393458; factors[30][2] = 2.04099214; factors[30][3] = 3.17325838; 
            factors[31][1] = 1.35945350; factors[31][2] = 1.89723538; factors[31][3] = 2.80015965; 
            factors[32][1] = 1.32070386; factors[32][2] = 1.77807706; factors[32][3] = 2.50768778; 
            factors[33][1] = 1.28680561; factors[33][2] = 1.67843460; factors[33][3] = 2.27509826; 
            factors[34][1] = 1.25703662; factors[34][2] = 1.59443426; factors[34][3] = 2.08767489; 
            factors[35][1] = 1.23080093; factors[35][2] = 1.52309419; factors[35][3] = 1.93482235; 
            factors[36][1] = 1.20760378; factors[36][2] = 1.46209608; factors[36][3] = 1.80879991; 
            factors[37][1] = 1.18703208; factors[37][2] = 1.40961975; factors[37][3] = 1.70387137; 
            factors[38][1] = 1.16873891; factors[38][2] = 1.36422247; factors[38][3] = 1.61572760; 
            factors[39][1] = 1.15243138; factors[39][2] = 1.32475028; factors[39][3] = 1.54108925;
        }
        else if( L==8 ){
            factors[0][1] = 51.07449534; factors[0][2] = 4328.60854535; factors[0][3] = 532477.87662533; factors[0][4] = 102753662.84840831; 
            factors[1][1] = 42.95896635; factors[1][2] = 3055.08135624; factors[1][3] = 315255.63143397; factors[1][4] = 46404493.23513141; 
            factors[2][1] = 36.16097339; factors[2][2] = 2158.63896969; factors[2][3] = 186851.13038382; factors[2][4] = 22102507.31323635; 
            factors[3][1] = 30.46668829; factors[3][2] = 1527.25166476; factors[3][3] = 110903.23219752; factors[3][4] = 10786034.00132734; 
            factors[4][1] = 25.69699816; factors[4][2] = 1082.23517642; factors[4][3] = 65941.09061753; factors[4][4] = 5328892.92383491; 
            factors[5][1] = 21.70187114; factors[5][2] = 768.31515867; factors[5][3] = 39291.00870938; factors[5][4] = 2651746.26751990; 
            factors[6][1] = 18.35563668; factors[6][2] = 546.65380242; factors[6][3] = 23471.37884259; factors[6][4] = 1326249.75961720; 
            factors[7][1] = 15.55303190; factors[7][2] = 389.95513652; factors[7][3] = 14063.83807317; factors[7][4] = 666226.86912496; 
            factors[8][1] = 13.20588952; factors[8][2] = 279.02911933; factors[8][3] = 8457.36049352; factors[8][4] = 336159.96403766; 
            factors[9][1] = 11.24036311; factors[9][2] = 200.37954604; factors[9][3] = 5107.61409473; factors[9][4] = 170450.73891293; 
            factors[10][1] = 9.59460225; factors[10][2] = 144.51053446; factors[10][3] = 3100.18021542; factors[10][4] = 86915.90106256; 
            factors[11][1] = 8.21680429; factors[11][2] = 104.73738516; factors[11][3] = 1892.90128524; factors[11][4] = 44612.51970813; 
            factors[12][1] = 7.06358127; factors[12][2] = 76.35148756; factors[12][3] = 1163.82303841; factors[12][4] = 23076.24493432; 
            factors[13][1] = 6.09859036; factors[13][2] = 56.03376790; factors[13][3] = 721.39723676; factors[13][4] = 12044.89596230; 
            factors[14][1] = 5.29138471; factors[14][2] = 41.44262966; factors[14][3] = 451.40897240; factors[14][4] = 6353.87190033; 
            factors[15][1] = 4.61644839; factors[15][2] = 30.92441143; factors[15][3] = 285.57809237; factors[15][4] = 3393.38738140; 
            factors[16][1] = 4.05238527; factors[16][2] = 23.30987893; factors[16][3] = 182.96126047; factors[16][4] = 1838.43099983; 
            factors[17][1] = 3.58123711; factors[17][2] = 17.77114061; factors[17][3] = 118.92051529; factors[17][4] = 1012.59532060; 
            factors[18][1] = 3.18791051; factors[18][2] = 13.72100737; factors[18][3] = 78.56902302; factors[18][4] = 568.38733049; 
            factors[19][1] = 2.85969700; factors[19][2] = 10.74217397; factors[19][3] = 52.86929482; factors[19][4] = 325.98030588; 
            factors[20][1] = 2.58587413; factors[20][2] = 8.53736014; factors[20][3] = 36.30510711; factors[20][4] = 191.53182307; 
            factors[21][1] = 2.35737846; factors[21][2] = 6.89419001; factors[21][3] = 25.48869263; factors[21][4] = 115.60066341; 
            factors[22][1] = 2.16654260; factors[22][2] = 5.66044240; factors[22][3] = 18.32489066; factors[22][4] = 71.85576160; 
            factors[23][1] = 2.00688825; factors[23][2] = 4.72660472; factors[23][3] = 13.50775009; factors[23][4] = 46.10298512; 
            factors[24][1] = 1.87296445; factors[24][2] = 4.01357392; factors[24][3] = 10.21612054; factors[24][4] = 30.58705862; 
            factors[25][1] = 1.76021764; factors[25][2] = 3.46398310; factors[25][3] = 7.92872382; factors[25][4] = 21.00749248; 
            factors[26][1] = 1.66487953; factors[26][2] = 3.03607520; factors[26][3] = 6.31122144; factors[26][4] = 14.94085948; 
            factors[27][1] = 1.58386195; factors[27][2] = 2.69935756; factors[27][3] = 5.14683350; factors[27][4] = 10.99772016; 
            factors[28][1] = 1.51465433; factors[28][2] = 2.43149673; factors[28][3] = 4.29341167; factors[28][4] = 8.36678959; 
            factors[29][1] = 1.45522555; factors[29][2] = 2.21608009; factors[29][3] = 3.65665787; factors[29][4] = 6.56527085; 
            factors[30][1] = 1.40393458; factors[30][2] = 2.04099214; factors[30][3] = 3.17325838; factors[30][4] = 5.30016704; 
            factors[31][1] = 1.35945350; factors[31][2] = 1.89723538; factors[31][3] = 2.80015965; factors[31][4] = 4.39006726; 
            factors[32][1] = 1.32070386; factors[32][2] = 1.77807706; factors[32][3] = 2.50768778; factors[32][4] = 3.72033484; 
            factors[33][1] = 1.28680561; factors[33][2] = 1.67843460; factors[33][3] = 2.27509826; factors[33][4] = 3.21701756; 
            factors[34][1] = 1.25703662; factors[34][2] = 1.59443426; factors[34][3] = 2.08767489; factors[34][4] = 2.83141102; 
            factors[35][1] = 1.23080093; factors[35][2] = 1.52309419; factors[35][3] = 1.93482235; factors[35][4] = 2.53077531; 
            factors[36][1] = 1.20760378; factors[36][2] = 1.46209608; factors[36][3] = 1.80879991; factors[36][4] = 2.29265831; 
            factors[37][1] = 1.18703208; factors[37][2] = 1.40961975; factors[37][3] = 1.70387137; factors[37][4] = 2.10136421; 
            factors[38][1] = 1.16873891; factors[38][2] = 1.36422247; factors[38][3] = 1.61572760; factors[38][4] = 1.94571792; 
            factors[39][1] = 1.15243138; factors[39][2] = 1.32475028; factors[39][3] = 1.54108925; factors[39][4] = 1.81762453;
        }
        else{
            // Should never get here, because this is very likely to produce a crash
            std::cerr << "Only degrees L=0, 2, 4, 6, or 8 are allowed" << std::endl;
            return false;
        }
        return true;
    }
    
}
#endif
