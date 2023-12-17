#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputOriginInfo_t)
// Forward declare root types
namespace OVR::OpenVR {
struct InputOriginInfo_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::InputOriginInfo_t);
// Type: OVR.OpenVR::InputOriginInfo_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8724))
// CS Name: ::OVR.OpenVR::InputOriginInfo_t
struct CORDL_TYPE InputOriginInfo_t : public ::bs_hook::ValueTypeWrapper<0x90> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field devicePath offset 0x0
 __declspec(property(get=__get_devicePath, put=__set_devicePath)) uint64_t  devicePath;

/// @brief Field trackedDeviceIndex offset 0x8
 __declspec(property(get=__get_trackedDeviceIndex, put=__set_trackedDeviceIndex)) uint32_t  trackedDeviceIndex;

/// @brief Field rchRenderModelComponentName0 offset 0xc
 __declspec(property(get=__get_rchRenderModelComponentName0, put=__set_rchRenderModelComponentName0)) uint8_t  rchRenderModelComponentName0;

/// @brief Field rchRenderModelComponentName1 offset 0xd
 __declspec(property(get=__get_rchRenderModelComponentName1, put=__set_rchRenderModelComponentName1)) uint8_t  rchRenderModelComponentName1;

/// @brief Field rchRenderModelComponentName2 offset 0xe
 __declspec(property(get=__get_rchRenderModelComponentName2, put=__set_rchRenderModelComponentName2)) uint8_t  rchRenderModelComponentName2;

/// @brief Field rchRenderModelComponentName3 offset 0xf
 __declspec(property(get=__get_rchRenderModelComponentName3, put=__set_rchRenderModelComponentName3)) uint8_t  rchRenderModelComponentName3;

/// @brief Field rchRenderModelComponentName4 offset 0x10
 __declspec(property(get=__get_rchRenderModelComponentName4, put=__set_rchRenderModelComponentName4)) uint8_t  rchRenderModelComponentName4;

/// @brief Field rchRenderModelComponentName5 offset 0x11
 __declspec(property(get=__get_rchRenderModelComponentName5, put=__set_rchRenderModelComponentName5)) uint8_t  rchRenderModelComponentName5;

/// @brief Field rchRenderModelComponentName6 offset 0x12
 __declspec(property(get=__get_rchRenderModelComponentName6, put=__set_rchRenderModelComponentName6)) uint8_t  rchRenderModelComponentName6;

/// @brief Field rchRenderModelComponentName7 offset 0x13
 __declspec(property(get=__get_rchRenderModelComponentName7, put=__set_rchRenderModelComponentName7)) uint8_t  rchRenderModelComponentName7;

/// @brief Field rchRenderModelComponentName8 offset 0x14
 __declspec(property(get=__get_rchRenderModelComponentName8, put=__set_rchRenderModelComponentName8)) uint8_t  rchRenderModelComponentName8;

/// @brief Field rchRenderModelComponentName9 offset 0x15
 __declspec(property(get=__get_rchRenderModelComponentName9, put=__set_rchRenderModelComponentName9)) uint8_t  rchRenderModelComponentName9;

/// @brief Field rchRenderModelComponentName10 offset 0x16
 __declspec(property(get=__get_rchRenderModelComponentName10, put=__set_rchRenderModelComponentName10)) uint8_t  rchRenderModelComponentName10;

/// @brief Field rchRenderModelComponentName11 offset 0x17
 __declspec(property(get=__get_rchRenderModelComponentName11, put=__set_rchRenderModelComponentName11)) uint8_t  rchRenderModelComponentName11;

/// @brief Field rchRenderModelComponentName12 offset 0x18
 __declspec(property(get=__get_rchRenderModelComponentName12, put=__set_rchRenderModelComponentName12)) uint8_t  rchRenderModelComponentName12;

/// @brief Field rchRenderModelComponentName13 offset 0x19
 __declspec(property(get=__get_rchRenderModelComponentName13, put=__set_rchRenderModelComponentName13)) uint8_t  rchRenderModelComponentName13;

/// @brief Field rchRenderModelComponentName14 offset 0x1a
 __declspec(property(get=__get_rchRenderModelComponentName14, put=__set_rchRenderModelComponentName14)) uint8_t  rchRenderModelComponentName14;

/// @brief Field rchRenderModelComponentName15 offset 0x1b
 __declspec(property(get=__get_rchRenderModelComponentName15, put=__set_rchRenderModelComponentName15)) uint8_t  rchRenderModelComponentName15;

/// @brief Field rchRenderModelComponentName16 offset 0x1c
 __declspec(property(get=__get_rchRenderModelComponentName16, put=__set_rchRenderModelComponentName16)) uint8_t  rchRenderModelComponentName16;

/// @brief Field rchRenderModelComponentName17 offset 0x1d
 __declspec(property(get=__get_rchRenderModelComponentName17, put=__set_rchRenderModelComponentName17)) uint8_t  rchRenderModelComponentName17;

/// @brief Field rchRenderModelComponentName18 offset 0x1e
 __declspec(property(get=__get_rchRenderModelComponentName18, put=__set_rchRenderModelComponentName18)) uint8_t  rchRenderModelComponentName18;

/// @brief Field rchRenderModelComponentName19 offset 0x1f
 __declspec(property(get=__get_rchRenderModelComponentName19, put=__set_rchRenderModelComponentName19)) uint8_t  rchRenderModelComponentName19;

/// @brief Field rchRenderModelComponentName20 offset 0x20
 __declspec(property(get=__get_rchRenderModelComponentName20, put=__set_rchRenderModelComponentName20)) uint8_t  rchRenderModelComponentName20;

/// @brief Field rchRenderModelComponentName21 offset 0x21
 __declspec(property(get=__get_rchRenderModelComponentName21, put=__set_rchRenderModelComponentName21)) uint8_t  rchRenderModelComponentName21;

/// @brief Field rchRenderModelComponentName22 offset 0x22
 __declspec(property(get=__get_rchRenderModelComponentName22, put=__set_rchRenderModelComponentName22)) uint8_t  rchRenderModelComponentName22;

/// @brief Field rchRenderModelComponentName23 offset 0x23
 __declspec(property(get=__get_rchRenderModelComponentName23, put=__set_rchRenderModelComponentName23)) uint8_t  rchRenderModelComponentName23;

/// @brief Field rchRenderModelComponentName24 offset 0x24
 __declspec(property(get=__get_rchRenderModelComponentName24, put=__set_rchRenderModelComponentName24)) uint8_t  rchRenderModelComponentName24;

/// @brief Field rchRenderModelComponentName25 offset 0x25
 __declspec(property(get=__get_rchRenderModelComponentName25, put=__set_rchRenderModelComponentName25)) uint8_t  rchRenderModelComponentName25;

/// @brief Field rchRenderModelComponentName26 offset 0x26
 __declspec(property(get=__get_rchRenderModelComponentName26, put=__set_rchRenderModelComponentName26)) uint8_t  rchRenderModelComponentName26;

/// @brief Field rchRenderModelComponentName27 offset 0x27
 __declspec(property(get=__get_rchRenderModelComponentName27, put=__set_rchRenderModelComponentName27)) uint8_t  rchRenderModelComponentName27;

/// @brief Field rchRenderModelComponentName28 offset 0x28
 __declspec(property(get=__get_rchRenderModelComponentName28, put=__set_rchRenderModelComponentName28)) uint8_t  rchRenderModelComponentName28;

/// @brief Field rchRenderModelComponentName29 offset 0x29
 __declspec(property(get=__get_rchRenderModelComponentName29, put=__set_rchRenderModelComponentName29)) uint8_t  rchRenderModelComponentName29;

/// @brief Field rchRenderModelComponentName30 offset 0x2a
 __declspec(property(get=__get_rchRenderModelComponentName30, put=__set_rchRenderModelComponentName30)) uint8_t  rchRenderModelComponentName30;

/// @brief Field rchRenderModelComponentName31 offset 0x2b
 __declspec(property(get=__get_rchRenderModelComponentName31, put=__set_rchRenderModelComponentName31)) uint8_t  rchRenderModelComponentName31;

/// @brief Field rchRenderModelComponentName32 offset 0x2c
 __declspec(property(get=__get_rchRenderModelComponentName32, put=__set_rchRenderModelComponentName32)) uint8_t  rchRenderModelComponentName32;

/// @brief Field rchRenderModelComponentName33 offset 0x2d
 __declspec(property(get=__get_rchRenderModelComponentName33, put=__set_rchRenderModelComponentName33)) uint8_t  rchRenderModelComponentName33;

/// @brief Field rchRenderModelComponentName34 offset 0x2e
 __declspec(property(get=__get_rchRenderModelComponentName34, put=__set_rchRenderModelComponentName34)) uint8_t  rchRenderModelComponentName34;

/// @brief Field rchRenderModelComponentName35 offset 0x2f
 __declspec(property(get=__get_rchRenderModelComponentName35, put=__set_rchRenderModelComponentName35)) uint8_t  rchRenderModelComponentName35;

/// @brief Field rchRenderModelComponentName36 offset 0x30
 __declspec(property(get=__get_rchRenderModelComponentName36, put=__set_rchRenderModelComponentName36)) uint8_t  rchRenderModelComponentName36;

/// @brief Field rchRenderModelComponentName37 offset 0x31
 __declspec(property(get=__get_rchRenderModelComponentName37, put=__set_rchRenderModelComponentName37)) uint8_t  rchRenderModelComponentName37;

/// @brief Field rchRenderModelComponentName38 offset 0x32
 __declspec(property(get=__get_rchRenderModelComponentName38, put=__set_rchRenderModelComponentName38)) uint8_t  rchRenderModelComponentName38;

/// @brief Field rchRenderModelComponentName39 offset 0x33
 __declspec(property(get=__get_rchRenderModelComponentName39, put=__set_rchRenderModelComponentName39)) uint8_t  rchRenderModelComponentName39;

/// @brief Field rchRenderModelComponentName40 offset 0x34
 __declspec(property(get=__get_rchRenderModelComponentName40, put=__set_rchRenderModelComponentName40)) uint8_t  rchRenderModelComponentName40;

/// @brief Field rchRenderModelComponentName41 offset 0x35
 __declspec(property(get=__get_rchRenderModelComponentName41, put=__set_rchRenderModelComponentName41)) uint8_t  rchRenderModelComponentName41;

/// @brief Field rchRenderModelComponentName42 offset 0x36
 __declspec(property(get=__get_rchRenderModelComponentName42, put=__set_rchRenderModelComponentName42)) uint8_t  rchRenderModelComponentName42;

/// @brief Field rchRenderModelComponentName43 offset 0x37
 __declspec(property(get=__get_rchRenderModelComponentName43, put=__set_rchRenderModelComponentName43)) uint8_t  rchRenderModelComponentName43;

/// @brief Field rchRenderModelComponentName44 offset 0x38
 __declspec(property(get=__get_rchRenderModelComponentName44, put=__set_rchRenderModelComponentName44)) uint8_t  rchRenderModelComponentName44;

/// @brief Field rchRenderModelComponentName45 offset 0x39
 __declspec(property(get=__get_rchRenderModelComponentName45, put=__set_rchRenderModelComponentName45)) uint8_t  rchRenderModelComponentName45;

/// @brief Field rchRenderModelComponentName46 offset 0x3a
 __declspec(property(get=__get_rchRenderModelComponentName46, put=__set_rchRenderModelComponentName46)) uint8_t  rchRenderModelComponentName46;

/// @brief Field rchRenderModelComponentName47 offset 0x3b
 __declspec(property(get=__get_rchRenderModelComponentName47, put=__set_rchRenderModelComponentName47)) uint8_t  rchRenderModelComponentName47;

/// @brief Field rchRenderModelComponentName48 offset 0x3c
 __declspec(property(get=__get_rchRenderModelComponentName48, put=__set_rchRenderModelComponentName48)) uint8_t  rchRenderModelComponentName48;

/// @brief Field rchRenderModelComponentName49 offset 0x3d
 __declspec(property(get=__get_rchRenderModelComponentName49, put=__set_rchRenderModelComponentName49)) uint8_t  rchRenderModelComponentName49;

/// @brief Field rchRenderModelComponentName50 offset 0x3e
 __declspec(property(get=__get_rchRenderModelComponentName50, put=__set_rchRenderModelComponentName50)) uint8_t  rchRenderModelComponentName50;

/// @brief Field rchRenderModelComponentName51 offset 0x3f
 __declspec(property(get=__get_rchRenderModelComponentName51, put=__set_rchRenderModelComponentName51)) uint8_t  rchRenderModelComponentName51;

/// @brief Field rchRenderModelComponentName52 offset 0x40
 __declspec(property(get=__get_rchRenderModelComponentName52, put=__set_rchRenderModelComponentName52)) uint8_t  rchRenderModelComponentName52;

/// @brief Field rchRenderModelComponentName53 offset 0x41
 __declspec(property(get=__get_rchRenderModelComponentName53, put=__set_rchRenderModelComponentName53)) uint8_t  rchRenderModelComponentName53;

/// @brief Field rchRenderModelComponentName54 offset 0x42
 __declspec(property(get=__get_rchRenderModelComponentName54, put=__set_rchRenderModelComponentName54)) uint8_t  rchRenderModelComponentName54;

/// @brief Field rchRenderModelComponentName55 offset 0x43
 __declspec(property(get=__get_rchRenderModelComponentName55, put=__set_rchRenderModelComponentName55)) uint8_t  rchRenderModelComponentName55;

/// @brief Field rchRenderModelComponentName56 offset 0x44
 __declspec(property(get=__get_rchRenderModelComponentName56, put=__set_rchRenderModelComponentName56)) uint8_t  rchRenderModelComponentName56;

/// @brief Field rchRenderModelComponentName57 offset 0x45
 __declspec(property(get=__get_rchRenderModelComponentName57, put=__set_rchRenderModelComponentName57)) uint8_t  rchRenderModelComponentName57;

/// @brief Field rchRenderModelComponentName58 offset 0x46
 __declspec(property(get=__get_rchRenderModelComponentName58, put=__set_rchRenderModelComponentName58)) uint8_t  rchRenderModelComponentName58;

/// @brief Field rchRenderModelComponentName59 offset 0x47
 __declspec(property(get=__get_rchRenderModelComponentName59, put=__set_rchRenderModelComponentName59)) uint8_t  rchRenderModelComponentName59;

/// @brief Field rchRenderModelComponentName60 offset 0x48
 __declspec(property(get=__get_rchRenderModelComponentName60, put=__set_rchRenderModelComponentName60)) uint8_t  rchRenderModelComponentName60;

/// @brief Field rchRenderModelComponentName61 offset 0x49
 __declspec(property(get=__get_rchRenderModelComponentName61, put=__set_rchRenderModelComponentName61)) uint8_t  rchRenderModelComponentName61;

/// @brief Field rchRenderModelComponentName62 offset 0x4a
 __declspec(property(get=__get_rchRenderModelComponentName62, put=__set_rchRenderModelComponentName62)) uint8_t  rchRenderModelComponentName62;

/// @brief Field rchRenderModelComponentName63 offset 0x4b
 __declspec(property(get=__get_rchRenderModelComponentName63, put=__set_rchRenderModelComponentName63)) uint8_t  rchRenderModelComponentName63;

/// @brief Field rchRenderModelComponentName64 offset 0x4c
 __declspec(property(get=__get_rchRenderModelComponentName64, put=__set_rchRenderModelComponentName64)) uint8_t  rchRenderModelComponentName64;

/// @brief Field rchRenderModelComponentName65 offset 0x4d
 __declspec(property(get=__get_rchRenderModelComponentName65, put=__set_rchRenderModelComponentName65)) uint8_t  rchRenderModelComponentName65;

/// @brief Field rchRenderModelComponentName66 offset 0x4e
 __declspec(property(get=__get_rchRenderModelComponentName66, put=__set_rchRenderModelComponentName66)) uint8_t  rchRenderModelComponentName66;

/// @brief Field rchRenderModelComponentName67 offset 0x4f
 __declspec(property(get=__get_rchRenderModelComponentName67, put=__set_rchRenderModelComponentName67)) uint8_t  rchRenderModelComponentName67;

/// @brief Field rchRenderModelComponentName68 offset 0x50
 __declspec(property(get=__get_rchRenderModelComponentName68, put=__set_rchRenderModelComponentName68)) uint8_t  rchRenderModelComponentName68;

/// @brief Field rchRenderModelComponentName69 offset 0x51
 __declspec(property(get=__get_rchRenderModelComponentName69, put=__set_rchRenderModelComponentName69)) uint8_t  rchRenderModelComponentName69;

/// @brief Field rchRenderModelComponentName70 offset 0x52
 __declspec(property(get=__get_rchRenderModelComponentName70, put=__set_rchRenderModelComponentName70)) uint8_t  rchRenderModelComponentName70;

/// @brief Field rchRenderModelComponentName71 offset 0x53
 __declspec(property(get=__get_rchRenderModelComponentName71, put=__set_rchRenderModelComponentName71)) uint8_t  rchRenderModelComponentName71;

/// @brief Field rchRenderModelComponentName72 offset 0x54
 __declspec(property(get=__get_rchRenderModelComponentName72, put=__set_rchRenderModelComponentName72)) uint8_t  rchRenderModelComponentName72;

/// @brief Field rchRenderModelComponentName73 offset 0x55
 __declspec(property(get=__get_rchRenderModelComponentName73, put=__set_rchRenderModelComponentName73)) uint8_t  rchRenderModelComponentName73;

/// @brief Field rchRenderModelComponentName74 offset 0x56
 __declspec(property(get=__get_rchRenderModelComponentName74, put=__set_rchRenderModelComponentName74)) uint8_t  rchRenderModelComponentName74;

/// @brief Field rchRenderModelComponentName75 offset 0x57
 __declspec(property(get=__get_rchRenderModelComponentName75, put=__set_rchRenderModelComponentName75)) uint8_t  rchRenderModelComponentName75;

/// @brief Field rchRenderModelComponentName76 offset 0x58
 __declspec(property(get=__get_rchRenderModelComponentName76, put=__set_rchRenderModelComponentName76)) uint8_t  rchRenderModelComponentName76;

/// @brief Field rchRenderModelComponentName77 offset 0x59
 __declspec(property(get=__get_rchRenderModelComponentName77, put=__set_rchRenderModelComponentName77)) uint8_t  rchRenderModelComponentName77;

/// @brief Field rchRenderModelComponentName78 offset 0x5a
 __declspec(property(get=__get_rchRenderModelComponentName78, put=__set_rchRenderModelComponentName78)) uint8_t  rchRenderModelComponentName78;

/// @brief Field rchRenderModelComponentName79 offset 0x5b
 __declspec(property(get=__get_rchRenderModelComponentName79, put=__set_rchRenderModelComponentName79)) uint8_t  rchRenderModelComponentName79;

/// @brief Field rchRenderModelComponentName80 offset 0x5c
 __declspec(property(get=__get_rchRenderModelComponentName80, put=__set_rchRenderModelComponentName80)) uint8_t  rchRenderModelComponentName80;

/// @brief Field rchRenderModelComponentName81 offset 0x5d
 __declspec(property(get=__get_rchRenderModelComponentName81, put=__set_rchRenderModelComponentName81)) uint8_t  rchRenderModelComponentName81;

/// @brief Field rchRenderModelComponentName82 offset 0x5e
 __declspec(property(get=__get_rchRenderModelComponentName82, put=__set_rchRenderModelComponentName82)) uint8_t  rchRenderModelComponentName82;

/// @brief Field rchRenderModelComponentName83 offset 0x5f
 __declspec(property(get=__get_rchRenderModelComponentName83, put=__set_rchRenderModelComponentName83)) uint8_t  rchRenderModelComponentName83;

/// @brief Field rchRenderModelComponentName84 offset 0x60
 __declspec(property(get=__get_rchRenderModelComponentName84, put=__set_rchRenderModelComponentName84)) uint8_t  rchRenderModelComponentName84;

/// @brief Field rchRenderModelComponentName85 offset 0x61
 __declspec(property(get=__get_rchRenderModelComponentName85, put=__set_rchRenderModelComponentName85)) uint8_t  rchRenderModelComponentName85;

/// @brief Field rchRenderModelComponentName86 offset 0x62
 __declspec(property(get=__get_rchRenderModelComponentName86, put=__set_rchRenderModelComponentName86)) uint8_t  rchRenderModelComponentName86;

/// @brief Field rchRenderModelComponentName87 offset 0x63
 __declspec(property(get=__get_rchRenderModelComponentName87, put=__set_rchRenderModelComponentName87)) uint8_t  rchRenderModelComponentName87;

/// @brief Field rchRenderModelComponentName88 offset 0x64
 __declspec(property(get=__get_rchRenderModelComponentName88, put=__set_rchRenderModelComponentName88)) uint8_t  rchRenderModelComponentName88;

/// @brief Field rchRenderModelComponentName89 offset 0x65
 __declspec(property(get=__get_rchRenderModelComponentName89, put=__set_rchRenderModelComponentName89)) uint8_t  rchRenderModelComponentName89;

/// @brief Field rchRenderModelComponentName90 offset 0x66
 __declspec(property(get=__get_rchRenderModelComponentName90, put=__set_rchRenderModelComponentName90)) uint8_t  rchRenderModelComponentName90;

/// @brief Field rchRenderModelComponentName91 offset 0x67
 __declspec(property(get=__get_rchRenderModelComponentName91, put=__set_rchRenderModelComponentName91)) uint8_t  rchRenderModelComponentName91;

/// @brief Field rchRenderModelComponentName92 offset 0x68
 __declspec(property(get=__get_rchRenderModelComponentName92, put=__set_rchRenderModelComponentName92)) uint8_t  rchRenderModelComponentName92;

/// @brief Field rchRenderModelComponentName93 offset 0x69
 __declspec(property(get=__get_rchRenderModelComponentName93, put=__set_rchRenderModelComponentName93)) uint8_t  rchRenderModelComponentName93;

/// @brief Field rchRenderModelComponentName94 offset 0x6a
 __declspec(property(get=__get_rchRenderModelComponentName94, put=__set_rchRenderModelComponentName94)) uint8_t  rchRenderModelComponentName94;

/// @brief Field rchRenderModelComponentName95 offset 0x6b
 __declspec(property(get=__get_rchRenderModelComponentName95, put=__set_rchRenderModelComponentName95)) uint8_t  rchRenderModelComponentName95;

/// @brief Field rchRenderModelComponentName96 offset 0x6c
 __declspec(property(get=__get_rchRenderModelComponentName96, put=__set_rchRenderModelComponentName96)) uint8_t  rchRenderModelComponentName96;

/// @brief Field rchRenderModelComponentName97 offset 0x6d
 __declspec(property(get=__get_rchRenderModelComponentName97, put=__set_rchRenderModelComponentName97)) uint8_t  rchRenderModelComponentName97;

/// @brief Field rchRenderModelComponentName98 offset 0x6e
 __declspec(property(get=__get_rchRenderModelComponentName98, put=__set_rchRenderModelComponentName98)) uint8_t  rchRenderModelComponentName98;

/// @brief Field rchRenderModelComponentName99 offset 0x6f
 __declspec(property(get=__get_rchRenderModelComponentName99, put=__set_rchRenderModelComponentName99)) uint8_t  rchRenderModelComponentName99;

/// @brief Field rchRenderModelComponentName100 offset 0x70
 __declspec(property(get=__get_rchRenderModelComponentName100, put=__set_rchRenderModelComponentName100)) uint8_t  rchRenderModelComponentName100;

/// @brief Field rchRenderModelComponentName101 offset 0x71
 __declspec(property(get=__get_rchRenderModelComponentName101, put=__set_rchRenderModelComponentName101)) uint8_t  rchRenderModelComponentName101;

/// @brief Field rchRenderModelComponentName102 offset 0x72
 __declspec(property(get=__get_rchRenderModelComponentName102, put=__set_rchRenderModelComponentName102)) uint8_t  rchRenderModelComponentName102;

/// @brief Field rchRenderModelComponentName103 offset 0x73
 __declspec(property(get=__get_rchRenderModelComponentName103, put=__set_rchRenderModelComponentName103)) uint8_t  rchRenderModelComponentName103;

/// @brief Field rchRenderModelComponentName104 offset 0x74
 __declspec(property(get=__get_rchRenderModelComponentName104, put=__set_rchRenderModelComponentName104)) uint8_t  rchRenderModelComponentName104;

/// @brief Field rchRenderModelComponentName105 offset 0x75
 __declspec(property(get=__get_rchRenderModelComponentName105, put=__set_rchRenderModelComponentName105)) uint8_t  rchRenderModelComponentName105;

/// @brief Field rchRenderModelComponentName106 offset 0x76
 __declspec(property(get=__get_rchRenderModelComponentName106, put=__set_rchRenderModelComponentName106)) uint8_t  rchRenderModelComponentName106;

/// @brief Field rchRenderModelComponentName107 offset 0x77
 __declspec(property(get=__get_rchRenderModelComponentName107, put=__set_rchRenderModelComponentName107)) uint8_t  rchRenderModelComponentName107;

/// @brief Field rchRenderModelComponentName108 offset 0x78
 __declspec(property(get=__get_rchRenderModelComponentName108, put=__set_rchRenderModelComponentName108)) uint8_t  rchRenderModelComponentName108;

/// @brief Field rchRenderModelComponentName109 offset 0x79
 __declspec(property(get=__get_rchRenderModelComponentName109, put=__set_rchRenderModelComponentName109)) uint8_t  rchRenderModelComponentName109;

/// @brief Field rchRenderModelComponentName110 offset 0x7a
 __declspec(property(get=__get_rchRenderModelComponentName110, put=__set_rchRenderModelComponentName110)) uint8_t  rchRenderModelComponentName110;

/// @brief Field rchRenderModelComponentName111 offset 0x7b
 __declspec(property(get=__get_rchRenderModelComponentName111, put=__set_rchRenderModelComponentName111)) uint8_t  rchRenderModelComponentName111;

/// @brief Field rchRenderModelComponentName112 offset 0x7c
 __declspec(property(get=__get_rchRenderModelComponentName112, put=__set_rchRenderModelComponentName112)) uint8_t  rchRenderModelComponentName112;

/// @brief Field rchRenderModelComponentName113 offset 0x7d
 __declspec(property(get=__get_rchRenderModelComponentName113, put=__set_rchRenderModelComponentName113)) uint8_t  rchRenderModelComponentName113;

/// @brief Field rchRenderModelComponentName114 offset 0x7e
 __declspec(property(get=__get_rchRenderModelComponentName114, put=__set_rchRenderModelComponentName114)) uint8_t  rchRenderModelComponentName114;

/// @brief Field rchRenderModelComponentName115 offset 0x7f
 __declspec(property(get=__get_rchRenderModelComponentName115, put=__set_rchRenderModelComponentName115)) uint8_t  rchRenderModelComponentName115;

/// @brief Field rchRenderModelComponentName116 offset 0x80
 __declspec(property(get=__get_rchRenderModelComponentName116, put=__set_rchRenderModelComponentName116)) uint8_t  rchRenderModelComponentName116;

/// @brief Field rchRenderModelComponentName117 offset 0x81
 __declspec(property(get=__get_rchRenderModelComponentName117, put=__set_rchRenderModelComponentName117)) uint8_t  rchRenderModelComponentName117;

/// @brief Field rchRenderModelComponentName118 offset 0x82
 __declspec(property(get=__get_rchRenderModelComponentName118, put=__set_rchRenderModelComponentName118)) uint8_t  rchRenderModelComponentName118;

/// @brief Field rchRenderModelComponentName119 offset 0x83
 __declspec(property(get=__get_rchRenderModelComponentName119, put=__set_rchRenderModelComponentName119)) uint8_t  rchRenderModelComponentName119;

/// @brief Field rchRenderModelComponentName120 offset 0x84
 __declspec(property(get=__get_rchRenderModelComponentName120, put=__set_rchRenderModelComponentName120)) uint8_t  rchRenderModelComponentName120;

/// @brief Field rchRenderModelComponentName121 offset 0x85
 __declspec(property(get=__get_rchRenderModelComponentName121, put=__set_rchRenderModelComponentName121)) uint8_t  rchRenderModelComponentName121;

/// @brief Field rchRenderModelComponentName122 offset 0x86
 __declspec(property(get=__get_rchRenderModelComponentName122, put=__set_rchRenderModelComponentName122)) uint8_t  rchRenderModelComponentName122;

/// @brief Field rchRenderModelComponentName123 offset 0x87
 __declspec(property(get=__get_rchRenderModelComponentName123, put=__set_rchRenderModelComponentName123)) uint8_t  rchRenderModelComponentName123;

/// @brief Field rchRenderModelComponentName124 offset 0x88
 __declspec(property(get=__get_rchRenderModelComponentName124, put=__set_rchRenderModelComponentName124)) uint8_t  rchRenderModelComponentName124;

/// @brief Field rchRenderModelComponentName125 offset 0x89
 __declspec(property(get=__get_rchRenderModelComponentName125, put=__set_rchRenderModelComponentName125)) uint8_t  rchRenderModelComponentName125;

/// @brief Field rchRenderModelComponentName126 offset 0x8a
 __declspec(property(get=__get_rchRenderModelComponentName126, put=__set_rchRenderModelComponentName126)) uint8_t  rchRenderModelComponentName126;

/// @brief Field rchRenderModelComponentName127 offset 0x8b
 __declspec(property(get=__get_rchRenderModelComponentName127, put=__set_rchRenderModelComponentName127)) uint8_t  rchRenderModelComponentName127;

 __declspec(property(get=get_rchRenderModelComponentName)) ::StringW  rchRenderModelComponentName;

constexpr void __set_devicePath(uint64_t  value) ;

constexpr uint64_t& __get_devicePath() ;

constexpr uint64_t const& __get_devicePath() const;

constexpr void __set_trackedDeviceIndex(uint32_t  value) ;

constexpr uint32_t& __get_trackedDeviceIndex() ;

constexpr uint32_t const& __get_trackedDeviceIndex() const;

constexpr void __set_rchRenderModelComponentName0(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName0() ;

constexpr uint8_t const& __get_rchRenderModelComponentName0() const;

constexpr void __set_rchRenderModelComponentName1(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName1() ;

constexpr uint8_t const& __get_rchRenderModelComponentName1() const;

constexpr void __set_rchRenderModelComponentName2(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName2() ;

constexpr uint8_t const& __get_rchRenderModelComponentName2() const;

constexpr void __set_rchRenderModelComponentName3(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName3() ;

constexpr uint8_t const& __get_rchRenderModelComponentName3() const;

constexpr void __set_rchRenderModelComponentName4(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName4() ;

constexpr uint8_t const& __get_rchRenderModelComponentName4() const;

constexpr void __set_rchRenderModelComponentName5(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName5() ;

constexpr uint8_t const& __get_rchRenderModelComponentName5() const;

constexpr void __set_rchRenderModelComponentName6(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName6() ;

constexpr uint8_t const& __get_rchRenderModelComponentName6() const;

constexpr void __set_rchRenderModelComponentName7(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName7() ;

constexpr uint8_t const& __get_rchRenderModelComponentName7() const;

constexpr void __set_rchRenderModelComponentName8(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName8() ;

constexpr uint8_t const& __get_rchRenderModelComponentName8() const;

constexpr void __set_rchRenderModelComponentName9(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName9() ;

constexpr uint8_t const& __get_rchRenderModelComponentName9() const;

constexpr void __set_rchRenderModelComponentName10(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName10() ;

constexpr uint8_t const& __get_rchRenderModelComponentName10() const;

constexpr void __set_rchRenderModelComponentName11(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName11() ;

constexpr uint8_t const& __get_rchRenderModelComponentName11() const;

constexpr void __set_rchRenderModelComponentName12(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName12() ;

constexpr uint8_t const& __get_rchRenderModelComponentName12() const;

constexpr void __set_rchRenderModelComponentName13(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName13() ;

constexpr uint8_t const& __get_rchRenderModelComponentName13() const;

constexpr void __set_rchRenderModelComponentName14(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName14() ;

constexpr uint8_t const& __get_rchRenderModelComponentName14() const;

constexpr void __set_rchRenderModelComponentName15(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName15() ;

constexpr uint8_t const& __get_rchRenderModelComponentName15() const;

constexpr void __set_rchRenderModelComponentName16(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName16() ;

constexpr uint8_t const& __get_rchRenderModelComponentName16() const;

constexpr void __set_rchRenderModelComponentName17(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName17() ;

constexpr uint8_t const& __get_rchRenderModelComponentName17() const;

constexpr void __set_rchRenderModelComponentName18(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName18() ;

constexpr uint8_t const& __get_rchRenderModelComponentName18() const;

constexpr void __set_rchRenderModelComponentName19(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName19() ;

constexpr uint8_t const& __get_rchRenderModelComponentName19() const;

constexpr void __set_rchRenderModelComponentName20(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName20() ;

constexpr uint8_t const& __get_rchRenderModelComponentName20() const;

constexpr void __set_rchRenderModelComponentName21(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName21() ;

constexpr uint8_t const& __get_rchRenderModelComponentName21() const;

constexpr void __set_rchRenderModelComponentName22(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName22() ;

constexpr uint8_t const& __get_rchRenderModelComponentName22() const;

constexpr void __set_rchRenderModelComponentName23(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName23() ;

constexpr uint8_t const& __get_rchRenderModelComponentName23() const;

constexpr void __set_rchRenderModelComponentName24(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName24() ;

constexpr uint8_t const& __get_rchRenderModelComponentName24() const;

constexpr void __set_rchRenderModelComponentName25(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName25() ;

constexpr uint8_t const& __get_rchRenderModelComponentName25() const;

constexpr void __set_rchRenderModelComponentName26(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName26() ;

constexpr uint8_t const& __get_rchRenderModelComponentName26() const;

constexpr void __set_rchRenderModelComponentName27(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName27() ;

constexpr uint8_t const& __get_rchRenderModelComponentName27() const;

constexpr void __set_rchRenderModelComponentName28(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName28() ;

constexpr uint8_t const& __get_rchRenderModelComponentName28() const;

constexpr void __set_rchRenderModelComponentName29(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName29() ;

constexpr uint8_t const& __get_rchRenderModelComponentName29() const;

constexpr void __set_rchRenderModelComponentName30(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName30() ;

constexpr uint8_t const& __get_rchRenderModelComponentName30() const;

constexpr void __set_rchRenderModelComponentName31(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName31() ;

constexpr uint8_t const& __get_rchRenderModelComponentName31() const;

constexpr void __set_rchRenderModelComponentName32(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName32() ;

constexpr uint8_t const& __get_rchRenderModelComponentName32() const;

constexpr void __set_rchRenderModelComponentName33(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName33() ;

constexpr uint8_t const& __get_rchRenderModelComponentName33() const;

constexpr void __set_rchRenderModelComponentName34(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName34() ;

constexpr uint8_t const& __get_rchRenderModelComponentName34() const;

constexpr void __set_rchRenderModelComponentName35(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName35() ;

constexpr uint8_t const& __get_rchRenderModelComponentName35() const;

constexpr void __set_rchRenderModelComponentName36(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName36() ;

constexpr uint8_t const& __get_rchRenderModelComponentName36() const;

constexpr void __set_rchRenderModelComponentName37(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName37() ;

constexpr uint8_t const& __get_rchRenderModelComponentName37() const;

constexpr void __set_rchRenderModelComponentName38(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName38() ;

constexpr uint8_t const& __get_rchRenderModelComponentName38() const;

constexpr void __set_rchRenderModelComponentName39(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName39() ;

constexpr uint8_t const& __get_rchRenderModelComponentName39() const;

constexpr void __set_rchRenderModelComponentName40(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName40() ;

constexpr uint8_t const& __get_rchRenderModelComponentName40() const;

constexpr void __set_rchRenderModelComponentName41(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName41() ;

constexpr uint8_t const& __get_rchRenderModelComponentName41() const;

constexpr void __set_rchRenderModelComponentName42(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName42() ;

constexpr uint8_t const& __get_rchRenderModelComponentName42() const;

constexpr void __set_rchRenderModelComponentName43(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName43() ;

constexpr uint8_t const& __get_rchRenderModelComponentName43() const;

constexpr void __set_rchRenderModelComponentName44(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName44() ;

constexpr uint8_t const& __get_rchRenderModelComponentName44() const;

constexpr void __set_rchRenderModelComponentName45(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName45() ;

constexpr uint8_t const& __get_rchRenderModelComponentName45() const;

constexpr void __set_rchRenderModelComponentName46(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName46() ;

constexpr uint8_t const& __get_rchRenderModelComponentName46() const;

constexpr void __set_rchRenderModelComponentName47(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName47() ;

constexpr uint8_t const& __get_rchRenderModelComponentName47() const;

constexpr void __set_rchRenderModelComponentName48(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName48() ;

constexpr uint8_t const& __get_rchRenderModelComponentName48() const;

constexpr void __set_rchRenderModelComponentName49(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName49() ;

constexpr uint8_t const& __get_rchRenderModelComponentName49() const;

constexpr void __set_rchRenderModelComponentName50(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName50() ;

constexpr uint8_t const& __get_rchRenderModelComponentName50() const;

constexpr void __set_rchRenderModelComponentName51(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName51() ;

constexpr uint8_t const& __get_rchRenderModelComponentName51() const;

constexpr void __set_rchRenderModelComponentName52(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName52() ;

constexpr uint8_t const& __get_rchRenderModelComponentName52() const;

constexpr void __set_rchRenderModelComponentName53(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName53() ;

constexpr uint8_t const& __get_rchRenderModelComponentName53() const;

constexpr void __set_rchRenderModelComponentName54(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName54() ;

constexpr uint8_t const& __get_rchRenderModelComponentName54() const;

constexpr void __set_rchRenderModelComponentName55(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName55() ;

constexpr uint8_t const& __get_rchRenderModelComponentName55() const;

constexpr void __set_rchRenderModelComponentName56(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName56() ;

constexpr uint8_t const& __get_rchRenderModelComponentName56() const;

constexpr void __set_rchRenderModelComponentName57(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName57() ;

constexpr uint8_t const& __get_rchRenderModelComponentName57() const;

constexpr void __set_rchRenderModelComponentName58(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName58() ;

constexpr uint8_t const& __get_rchRenderModelComponentName58() const;

constexpr void __set_rchRenderModelComponentName59(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName59() ;

constexpr uint8_t const& __get_rchRenderModelComponentName59() const;

constexpr void __set_rchRenderModelComponentName60(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName60() ;

constexpr uint8_t const& __get_rchRenderModelComponentName60() const;

constexpr void __set_rchRenderModelComponentName61(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName61() ;

constexpr uint8_t const& __get_rchRenderModelComponentName61() const;

constexpr void __set_rchRenderModelComponentName62(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName62() ;

constexpr uint8_t const& __get_rchRenderModelComponentName62() const;

constexpr void __set_rchRenderModelComponentName63(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName63() ;

constexpr uint8_t const& __get_rchRenderModelComponentName63() const;

constexpr void __set_rchRenderModelComponentName64(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName64() ;

constexpr uint8_t const& __get_rchRenderModelComponentName64() const;

constexpr void __set_rchRenderModelComponentName65(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName65() ;

constexpr uint8_t const& __get_rchRenderModelComponentName65() const;

constexpr void __set_rchRenderModelComponentName66(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName66() ;

constexpr uint8_t const& __get_rchRenderModelComponentName66() const;

constexpr void __set_rchRenderModelComponentName67(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName67() ;

constexpr uint8_t const& __get_rchRenderModelComponentName67() const;

constexpr void __set_rchRenderModelComponentName68(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName68() ;

constexpr uint8_t const& __get_rchRenderModelComponentName68() const;

constexpr void __set_rchRenderModelComponentName69(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName69() ;

constexpr uint8_t const& __get_rchRenderModelComponentName69() const;

constexpr void __set_rchRenderModelComponentName70(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName70() ;

constexpr uint8_t const& __get_rchRenderModelComponentName70() const;

constexpr void __set_rchRenderModelComponentName71(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName71() ;

constexpr uint8_t const& __get_rchRenderModelComponentName71() const;

constexpr void __set_rchRenderModelComponentName72(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName72() ;

constexpr uint8_t const& __get_rchRenderModelComponentName72() const;

constexpr void __set_rchRenderModelComponentName73(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName73() ;

constexpr uint8_t const& __get_rchRenderModelComponentName73() const;

constexpr void __set_rchRenderModelComponentName74(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName74() ;

constexpr uint8_t const& __get_rchRenderModelComponentName74() const;

constexpr void __set_rchRenderModelComponentName75(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName75() ;

constexpr uint8_t const& __get_rchRenderModelComponentName75() const;

constexpr void __set_rchRenderModelComponentName76(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName76() ;

constexpr uint8_t const& __get_rchRenderModelComponentName76() const;

constexpr void __set_rchRenderModelComponentName77(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName77() ;

constexpr uint8_t const& __get_rchRenderModelComponentName77() const;

constexpr void __set_rchRenderModelComponentName78(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName78() ;

constexpr uint8_t const& __get_rchRenderModelComponentName78() const;

constexpr void __set_rchRenderModelComponentName79(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName79() ;

constexpr uint8_t const& __get_rchRenderModelComponentName79() const;

constexpr void __set_rchRenderModelComponentName80(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName80() ;

constexpr uint8_t const& __get_rchRenderModelComponentName80() const;

constexpr void __set_rchRenderModelComponentName81(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName81() ;

constexpr uint8_t const& __get_rchRenderModelComponentName81() const;

constexpr void __set_rchRenderModelComponentName82(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName82() ;

constexpr uint8_t const& __get_rchRenderModelComponentName82() const;

constexpr void __set_rchRenderModelComponentName83(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName83() ;

constexpr uint8_t const& __get_rchRenderModelComponentName83() const;

constexpr void __set_rchRenderModelComponentName84(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName84() ;

constexpr uint8_t const& __get_rchRenderModelComponentName84() const;

constexpr void __set_rchRenderModelComponentName85(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName85() ;

constexpr uint8_t const& __get_rchRenderModelComponentName85() const;

constexpr void __set_rchRenderModelComponentName86(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName86() ;

constexpr uint8_t const& __get_rchRenderModelComponentName86() const;

constexpr void __set_rchRenderModelComponentName87(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName87() ;

constexpr uint8_t const& __get_rchRenderModelComponentName87() const;

constexpr void __set_rchRenderModelComponentName88(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName88() ;

constexpr uint8_t const& __get_rchRenderModelComponentName88() const;

constexpr void __set_rchRenderModelComponentName89(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName89() ;

constexpr uint8_t const& __get_rchRenderModelComponentName89() const;

constexpr void __set_rchRenderModelComponentName90(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName90() ;

constexpr uint8_t const& __get_rchRenderModelComponentName90() const;

constexpr void __set_rchRenderModelComponentName91(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName91() ;

constexpr uint8_t const& __get_rchRenderModelComponentName91() const;

constexpr void __set_rchRenderModelComponentName92(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName92() ;

constexpr uint8_t const& __get_rchRenderModelComponentName92() const;

constexpr void __set_rchRenderModelComponentName93(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName93() ;

constexpr uint8_t const& __get_rchRenderModelComponentName93() const;

constexpr void __set_rchRenderModelComponentName94(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName94() ;

constexpr uint8_t const& __get_rchRenderModelComponentName94() const;

constexpr void __set_rchRenderModelComponentName95(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName95() ;

constexpr uint8_t const& __get_rchRenderModelComponentName95() const;

constexpr void __set_rchRenderModelComponentName96(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName96() ;

constexpr uint8_t const& __get_rchRenderModelComponentName96() const;

constexpr void __set_rchRenderModelComponentName97(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName97() ;

constexpr uint8_t const& __get_rchRenderModelComponentName97() const;

constexpr void __set_rchRenderModelComponentName98(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName98() ;

constexpr uint8_t const& __get_rchRenderModelComponentName98() const;

constexpr void __set_rchRenderModelComponentName99(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName99() ;

constexpr uint8_t const& __get_rchRenderModelComponentName99() const;

constexpr void __set_rchRenderModelComponentName100(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName100() ;

constexpr uint8_t const& __get_rchRenderModelComponentName100() const;

constexpr void __set_rchRenderModelComponentName101(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName101() ;

constexpr uint8_t const& __get_rchRenderModelComponentName101() const;

constexpr void __set_rchRenderModelComponentName102(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName102() ;

constexpr uint8_t const& __get_rchRenderModelComponentName102() const;

constexpr void __set_rchRenderModelComponentName103(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName103() ;

constexpr uint8_t const& __get_rchRenderModelComponentName103() const;

constexpr void __set_rchRenderModelComponentName104(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName104() ;

constexpr uint8_t const& __get_rchRenderModelComponentName104() const;

constexpr void __set_rchRenderModelComponentName105(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName105() ;

constexpr uint8_t const& __get_rchRenderModelComponentName105() const;

constexpr void __set_rchRenderModelComponentName106(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName106() ;

constexpr uint8_t const& __get_rchRenderModelComponentName106() const;

constexpr void __set_rchRenderModelComponentName107(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName107() ;

constexpr uint8_t const& __get_rchRenderModelComponentName107() const;

constexpr void __set_rchRenderModelComponentName108(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName108() ;

constexpr uint8_t const& __get_rchRenderModelComponentName108() const;

constexpr void __set_rchRenderModelComponentName109(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName109() ;

constexpr uint8_t const& __get_rchRenderModelComponentName109() const;

constexpr void __set_rchRenderModelComponentName110(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName110() ;

constexpr uint8_t const& __get_rchRenderModelComponentName110() const;

constexpr void __set_rchRenderModelComponentName111(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName111() ;

constexpr uint8_t const& __get_rchRenderModelComponentName111() const;

constexpr void __set_rchRenderModelComponentName112(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName112() ;

constexpr uint8_t const& __get_rchRenderModelComponentName112() const;

constexpr void __set_rchRenderModelComponentName113(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName113() ;

constexpr uint8_t const& __get_rchRenderModelComponentName113() const;

constexpr void __set_rchRenderModelComponentName114(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName114() ;

constexpr uint8_t const& __get_rchRenderModelComponentName114() const;

constexpr void __set_rchRenderModelComponentName115(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName115() ;

constexpr uint8_t const& __get_rchRenderModelComponentName115() const;

constexpr void __set_rchRenderModelComponentName116(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName116() ;

constexpr uint8_t const& __get_rchRenderModelComponentName116() const;

constexpr void __set_rchRenderModelComponentName117(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName117() ;

constexpr uint8_t const& __get_rchRenderModelComponentName117() const;

constexpr void __set_rchRenderModelComponentName118(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName118() ;

constexpr uint8_t const& __get_rchRenderModelComponentName118() const;

constexpr void __set_rchRenderModelComponentName119(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName119() ;

constexpr uint8_t const& __get_rchRenderModelComponentName119() const;

constexpr void __set_rchRenderModelComponentName120(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName120() ;

constexpr uint8_t const& __get_rchRenderModelComponentName120() const;

constexpr void __set_rchRenderModelComponentName121(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName121() ;

constexpr uint8_t const& __get_rchRenderModelComponentName121() const;

constexpr void __set_rchRenderModelComponentName122(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName122() ;

constexpr uint8_t const& __get_rchRenderModelComponentName122() const;

constexpr void __set_rchRenderModelComponentName123(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName123() ;

constexpr uint8_t const& __get_rchRenderModelComponentName123() const;

constexpr void __set_rchRenderModelComponentName124(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName124() ;

constexpr uint8_t const& __get_rchRenderModelComponentName124() const;

constexpr void __set_rchRenderModelComponentName125(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName125() ;

constexpr uint8_t const& __get_rchRenderModelComponentName125() const;

constexpr void __set_rchRenderModelComponentName126(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName126() ;

constexpr uint8_t const& __get_rchRenderModelComponentName126() const;

constexpr void __set_rchRenderModelComponentName127(uint8_t  value) ;

constexpr uint8_t& __get_rchRenderModelComponentName127() ;

constexpr uint8_t const& __get_rchRenderModelComponentName127() const;

/// @brief Method get_rchRenderModelComponentName addr 0x27f6804 size 0x86c virtual false final false
inline ::StringW get_rchRenderModelComponentName() ;

// Ctor Parameters [CppParam { name: "devicePath", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName2", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName4", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName7", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName8", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName9", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName10", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName11", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName12", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName13", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName14", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName15", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName16", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName17", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName18", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName19", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName20", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName21", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName22", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName23", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName24", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName25", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName26", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName27", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName28", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName29", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName30", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName31", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName32", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName33", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName34", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName35", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName36", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName37", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName38", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName39", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName40", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName41", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName42", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName43", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName44", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName45", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName46", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName47", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName48", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName49", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName50", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName51", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName52", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName53", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName54", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName55", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName56", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName57", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName58", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName59", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName60", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName61", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName62", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName63", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName64", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName65", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName66", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName67", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName68", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName69", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName70", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName71", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName72", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName73", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName74", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName75", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName76", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName77", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName78", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName79", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName80", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName81", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName82", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName83", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName84", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName85", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName86", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName87", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName88", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName89", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName90", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName91", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName92", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName93", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName94", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName95", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName96", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName97", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName98", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName99", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName100", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName101", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName102", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName103", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName104", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName105", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName106", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName107", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName108", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName109", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName110", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName111", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName112", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName113", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName114", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName115", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName116", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName117", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName118", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName119", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName120", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName121", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName122", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName123", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName124", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName125", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName126", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName127", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr InputOriginInfo_t(uint64_t  devicePath, uint32_t  trackedDeviceIndex, uint8_t  rchRenderModelComponentName0, uint8_t  rchRenderModelComponentName1, uint8_t  rchRenderModelComponentName2, uint8_t  rchRenderModelComponentName3, uint8_t  rchRenderModelComponentName4, uint8_t  rchRenderModelComponentName5, uint8_t  rchRenderModelComponentName6, uint8_t  rchRenderModelComponentName7, uint8_t  rchRenderModelComponentName8, uint8_t  rchRenderModelComponentName9, uint8_t  rchRenderModelComponentName10, uint8_t  rchRenderModelComponentName11, uint8_t  rchRenderModelComponentName12, uint8_t  rchRenderModelComponentName13, uint8_t  rchRenderModelComponentName14, uint8_t  rchRenderModelComponentName15, uint8_t  rchRenderModelComponentName16, uint8_t  rchRenderModelComponentName17, uint8_t  rchRenderModelComponentName18, uint8_t  rchRenderModelComponentName19, uint8_t  rchRenderModelComponentName20, uint8_t  rchRenderModelComponentName21, uint8_t  rchRenderModelComponentName22, uint8_t  rchRenderModelComponentName23, uint8_t  rchRenderModelComponentName24, uint8_t  rchRenderModelComponentName25, uint8_t  rchRenderModelComponentName26, uint8_t  rchRenderModelComponentName27, uint8_t  rchRenderModelComponentName28, uint8_t  rchRenderModelComponentName29, uint8_t  rchRenderModelComponentName30, uint8_t  rchRenderModelComponentName31, uint8_t  rchRenderModelComponentName32, uint8_t  rchRenderModelComponentName33, uint8_t  rchRenderModelComponentName34, uint8_t  rchRenderModelComponentName35, uint8_t  rchRenderModelComponentName36, uint8_t  rchRenderModelComponentName37, uint8_t  rchRenderModelComponentName38, uint8_t  rchRenderModelComponentName39, uint8_t  rchRenderModelComponentName40, uint8_t  rchRenderModelComponentName41, uint8_t  rchRenderModelComponentName42, uint8_t  rchRenderModelComponentName43, uint8_t  rchRenderModelComponentName44, uint8_t  rchRenderModelComponentName45, uint8_t  rchRenderModelComponentName46, uint8_t  rchRenderModelComponentName47, uint8_t  rchRenderModelComponentName48, uint8_t  rchRenderModelComponentName49, uint8_t  rchRenderModelComponentName50, uint8_t  rchRenderModelComponentName51, uint8_t  rchRenderModelComponentName52, uint8_t  rchRenderModelComponentName53, uint8_t  rchRenderModelComponentName54, uint8_t  rchRenderModelComponentName55, uint8_t  rchRenderModelComponentName56, uint8_t  rchRenderModelComponentName57, uint8_t  rchRenderModelComponentName58, uint8_t  rchRenderModelComponentName59, uint8_t  rchRenderModelComponentName60, uint8_t  rchRenderModelComponentName61, uint8_t  rchRenderModelComponentName62, uint8_t  rchRenderModelComponentName63, uint8_t  rchRenderModelComponentName64, uint8_t  rchRenderModelComponentName65, uint8_t  rchRenderModelComponentName66, uint8_t  rchRenderModelComponentName67, uint8_t  rchRenderModelComponentName68, uint8_t  rchRenderModelComponentName69, uint8_t  rchRenderModelComponentName70, uint8_t  rchRenderModelComponentName71, uint8_t  rchRenderModelComponentName72, uint8_t  rchRenderModelComponentName73, uint8_t  rchRenderModelComponentName74, uint8_t  rchRenderModelComponentName75, uint8_t  rchRenderModelComponentName76, uint8_t  rchRenderModelComponentName77, uint8_t  rchRenderModelComponentName78, uint8_t  rchRenderModelComponentName79, uint8_t  rchRenderModelComponentName80, uint8_t  rchRenderModelComponentName81, uint8_t  rchRenderModelComponentName82, uint8_t  rchRenderModelComponentName83, uint8_t  rchRenderModelComponentName84, uint8_t  rchRenderModelComponentName85, uint8_t  rchRenderModelComponentName86, uint8_t  rchRenderModelComponentName87, uint8_t  rchRenderModelComponentName88, uint8_t  rchRenderModelComponentName89, uint8_t  rchRenderModelComponentName90, uint8_t  rchRenderModelComponentName91, uint8_t  rchRenderModelComponentName92, uint8_t  rchRenderModelComponentName93, uint8_t  rchRenderModelComponentName94, uint8_t  rchRenderModelComponentName95, uint8_t  rchRenderModelComponentName96, uint8_t  rchRenderModelComponentName97, uint8_t  rchRenderModelComponentName98, uint8_t  rchRenderModelComponentName99, uint8_t  rchRenderModelComponentName100, uint8_t  rchRenderModelComponentName101, uint8_t  rchRenderModelComponentName102, uint8_t  rchRenderModelComponentName103, uint8_t  rchRenderModelComponentName104, uint8_t  rchRenderModelComponentName105, uint8_t  rchRenderModelComponentName106, uint8_t  rchRenderModelComponentName107, uint8_t  rchRenderModelComponentName108, uint8_t  rchRenderModelComponentName109, uint8_t  rchRenderModelComponentName110, uint8_t  rchRenderModelComponentName111, uint8_t  rchRenderModelComponentName112, uint8_t  rchRenderModelComponentName113, uint8_t  rchRenderModelComponentName114, uint8_t  rchRenderModelComponentName115, uint8_t  rchRenderModelComponentName116, uint8_t  rchRenderModelComponentName117, uint8_t  rchRenderModelComponentName118, uint8_t  rchRenderModelComponentName119, uint8_t  rchRenderModelComponentName120, uint8_t  rchRenderModelComponentName121, uint8_t  rchRenderModelComponentName122, uint8_t  rchRenderModelComponentName123, uint8_t  rchRenderModelComponentName124, uint8_t  rchRenderModelComponentName125, uint8_t  rchRenderModelComponentName126, uint8_t  rchRenderModelComponentName127) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputOriginInfo_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x90>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputOriginInfo_t()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::InputOriginInfo_t, 0x90>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputOriginInfo_t, "OVR.OpenVR", "InputOriginInfo_t");
