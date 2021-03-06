/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/Audio/MIDI Drivers/AppleMIDIBluetoothDriver.plugin/AppleMIDIBluetoothDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleMIDIBluetoothDriver/AppleMIDIBluetoothDriver-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@class CBCentralManager, NSMutableArray, NSString;

@interface BLEMIDIDriverCentral : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {

	CBCentralManager* centralManager;
	NSMutableArray* connectedDevices;
	NSMutableArray* connectedPeripherals;
	NSMutableArray* peripheralsToConnect;
	MIDIDriverInterface* driver;
	unsigned long long connectionIntervalNanos;
	char leCapable;

}

@property (nonatomic,readonly) CBCentralManager * centralManager; 
@property (nonatomic,readonly) MIDIDriverInterface* driver; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)deviceForEP:(unsigned long)arg1 ;
-(void)checkChangeDeviceName:(unsigned long)arg1 withName:(id)arg2 ;
-(void)resetDevice:(unsigned long)arg1 ;
-(id)deviceForUUID:(id)arg1 ;
-(void)activateUUID:(id)arg1 withName:(id)arg2 ;
-(unsigned long)createDevice:(id)arg1 ;
-(void)cancelAllConnections;
-(id)deviceForPeripheral:(id)arg1 ;
-(void)removeDeviceForUUID:(id)arg1 ;
-(void)removeDeviceForPeripheral:(id)arg1 ;
-(void)activateConnectedUUIDs;
-(void)resetAllConnectedDevices;
-(char)isAlreadyConnectedAsCentral:(id)arg1 ;
-(char)verifyUUIDDiscovery:(id)arg1 ;
-(id)peripheralWithUUID:(id)arg1 ;
-(char)verifyBLEDevice:(id)arg1 ;
-(char)isLECapableHardware;
-(void)startScan;
-(void)dealloc;
-(id)init;
-(void)disconnectDevice:(unsigned long)arg1 ;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(void)connectDevice:(unsigned long)arg1 ;
-(CBCentralManager *)centralManager;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)stopScan;
-(void)centralManager:(id)arg1 didUpdateConnectionParameters:(id)arg2 interval:(id)arg3 latency:(id)arg4 supervisionTimeout:(id)arg5 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(MIDIDriverInterface*)driver;
-(id)initWithDriver:(MIDIDriverInterface*)arg1 ;
@end

