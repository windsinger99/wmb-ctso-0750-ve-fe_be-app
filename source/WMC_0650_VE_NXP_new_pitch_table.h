
#ifndef WMC_0650_VE_NXP_NEW_PITCH_TABLE_H_
#define WMC_0650_VE_NXP_NEW_PITCH_TABLE_H_


#include "TSP_Layout.h"

const float sensor_zero_x__ = 0.00f;
const float sensor_end_x__ = 1488.20f;
const float sensor_zero_y__ = 0.00f;
const float sensor_end_y__ = 863.10f;

const float aarea_zero_x__ =  29.85f;
const float aarea_end_x__ = 1458.35f;
const float aarea_zero_y__ = 29.65f;
const float aarea_end_y__ = 833.15f;

const float sensor_XPD_Pos__[X_CELL_SIZE] =
{
	12.6f,
	16.6f,
	20.5f,
	24.3f,
	28.6f,
	32.4f,
	37.1f,
	41.8f,
	46.0f,
	53.0f,
	64.7f,
	75.1f,
	82.5f,
	96.0f,
	106.6f,
	126.7f,
	135.4f,
	149.1f,
	162.2f,
	177.7f,
	193.6f,
	210.7f,
	229.8f,
	245.9f,
	263.5f,
	280.3f,
	299.4f,
	314.5f,
	332.4f,
	352.4f,
	374.0f,
	393.3f,
	413.3f,
	432.6f,
	444.3f,
	453.0f,
	472.3f,
	490.7f,
	509.2f,
	526.2f,
	543.1f,
	558.7f,
	578.1f,
	596.2f,
	607.9f,
	618.7f,
	628.9f,
	640.0f,
	655.8f,
	670.9f,
	691.3f,
	701.7f,
	711.9f,
	721.1f,
	732.3f,
	746.0f,
	752.7f,
	770.8f,
	788.9f,
	803.8f,
	821.0f,
	837.3f,
	854.5f,
	873.3f,
	891.5f,
	909.8f,
	930.2f,
	942.3f,
	958.5f,
	976.7f,
	994.5f,
	1013.9f,
	1030.9f,
	1048.9f,
	1061.2f,
	1074.0f,
	1083.6f,
	1094.2f,
	1103.0f,
	1121.4f,
	1139.3f,
	1157.2f,
	1172.1f,
	1188.8f,
	1202.5f,
	1223.2f,
	1241.1f,
	1258.4f,
	1276.5f,
	1292.7f,
	1308.4f,
	1323.7f,
	1337.6f,
	1348.4f,
	1363.7f,
	1375.5f,
	1387.3f,
	1398.3f,
	1409.6f,
	1417.8f,
	1428.7f,
	1436.7f,
	1444.6f,
	1450.9f,
	1455.3f,
	1459.4f,
	1463.8f,
	1467.7f,
	1471.5f,
	1475.6f
};

const float sensor_YPD_Pos__[Y_CELL_SIZE] =
{
	12.25f,
	16.05f,
	19.85f,
	24.15f,
	30.55f,
	38.85f,
	47.15f,
	55.45f,
	63.35f,
	72.95f,
	82.35f,
	90.75f,
	101.75f,
	112.85f,
	122.75f,
	133.75f,
	145.15f,
	156.05f,
	166.95f,
	178.05f,
	189.75f,
	197.75f,
	210.85f,
	225.05f,
	236.45f,
	248.65f,
	260.95f,
	273.95f,
	287.85f,
	301.95f,
	315.05f,
	325.85f,
	344.15f,
	358.15f,
	372.95f,
	387.55f,
	401.15f,
	415.35f,
	430.35f,
	444.45f,
	458.35f,
	472.75f,
	487.75f,
	500.55f,
	519.05f,
	528.05f,
	541.55f,
	554.75f,
	567.15f,
	577.75f,
	588.75f,
	599.85f,
	608.95f,
	621.45f,
	626.55f,
	642.05f,
	655.25f,
	667.75f,
	680.35f,
	692.75f,
	704.45f,
	716.05f,
	727.45f,
	738.05f,
	749.15f,
	759.55f,
	769.85f,
	779.75f,
	789.05f,
	797.65f,
	807.35f,
	815.95f,
	825.65f,
	832.55f,
	837.15f,
	841.75f,
	846.45f,
	850.85f
};

const float sensor_XLED_Pos__[X_CELL_SIZE] =
{
	12.6f,
	16.6f,
	20.6f,
	24.4f,
	28.3f,
	32.9f,
	37.4f,
	42.1f,
	46.2f,
	53.6f,
	64.4f,
	73.9f,
	84.9f,
	96.1f,
	108.0f,
	119.4f,
	132.7f,
	147.3f,
	160.9f,
	175.2f,
	192.3f,
	208.6f,
	226.0f,
	244.4f,
	261.4f,
	274.9f,
	297.5f,
	315.8f,
	334.8f,
	353.8f,
	375.8f,
	394.3f,
	413.3f,
	430.3f,
	444.8f,
	456.1f,
	465.8f,
	485.3f,
	505.6f,
	523.7f,
	539.9f,
	559.7f,
	578.0f,
	591.8f,
	604.3f,
	618.2f,
	632.5f,
	642.3f,
	657.0f,
	672.4f,
	690.4f,
	700.5f,
	711.8f,
	722.7f,
	733.5f,
	745.2f,
	755.9f,
	773.0f,
	790.4f,
	802.5f,
	813.4f,
	836.1f,
	857.9f,
	872.1f,
	887.8f,
	907.0f,
	926.0f,
	941.4f,
	957.8f,
	975.4f,
	994.6f,
	1015.4f,
	1030.4f,
	1043.8f,
	1058.9f,
	1074.2f,
	1085.4f,
	1095.0f,
	1102.0f,
	1119.7f,
	1137.6f,
	1156.3f,
	1172.4f,
	1186.4f,
	1203.8f,
	1221.2f,
	1236.0f,
	1251.1f,
	1266.3f,
	1280.8f,
	1297.0f,
	1315.2f,
	1328.7f,
	1344.3f,
	1359.6f,
	1371.7f,
	1385.6f,
	1397.2f,
	1408.5f,
	1419.4f,
	1429.1f,
	1438.9f,
	1443.1f,
	1450.4f,
	1455.7f,
	1459.6f,
	1463.4f,
	1467.2f,
	1471.5f,
	1475.6f
};

const float sensor_YLED_Pos__[Y_CELL_SIZE] =
{
	12.25f,
	16.05f,
	19.85f,
	24.25f,
	30.55f,
	38.15f,
	46.95f,
	55.35f,
	64.25f,
	73.15f,
	82.45f,
	89.35f,
	100.75f,
	111.05f,
	120.65f,
	130.35f,
	140.55f,
	152.25f,
	163.75f,
	175.25f,
	186.35f,
	195.35f,
	209.85f,
	223.05f,
	233.85f,
	247.45f,
	259.35f,
	272.15f,
	284.35f,
	298.15f,
	311.25f,
	322.75f,
	339.65f,
	352.05f,
	365.35f,
	379.55f,
	393.65f,
	407.65f,
	421.05f,
	435.95f,
	449.95f,
	466.75f,
	477.05f,
	492.15f,
	506.75f,
	519.95f,
	534.25f,
	548.95f,
	560.55f,
	572.05f,
	582.15f,
	592.35f,
	603.05f,
	614.15f,
	624.95f,
	636.65f,
	649.85f,
	662.65f,
	676.75f,
	690.35f,
	703.55f,
	716.55f,
	727.05f,
	738.15f,
	748.55f,
	759.55f,
	769.45f,
	779.45f,
	789.35f,
	798.75f,
	807.65f,
	816.75f,
	825.75f,
	833.75f,
	838.45f,
	842.35f,
	846.45f,
	850.85f
};



#endif /* WMC_0650_VE_NXP_NEW_PITCH_TABLE_H_ */
