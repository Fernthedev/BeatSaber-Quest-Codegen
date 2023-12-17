#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_SessionSyncData)
namespace HoudiniEngineUnity {
struct HAPI_Viewport;
}
namespace HoudiniEngineUnity {
struct HAPI_SessionSyncInfo;
}
namespace HoudiniEngineUnity {
struct __HEU_SessionSyncData__Status;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_SessionSyncData__Status;
}
namespace HoudiniEngineUnity {
class HEU_SessionSyncData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_SessionSyncData__Status);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionSyncData);
// Type: ::Status
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9789))
// CS Name: ::HEU_SessionSyncData::Status
struct CORDL_TYPE __HEU_SessionSyncData__Status : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_SessionSyncData__Status_Unwrapped
enum struct ____HEU_SessionSyncData__Status_Unwrapped : int32_t {
__E_Stopped = static_cast<int32_t>(0x0),
__E_Started = static_cast<int32_t>(0x1),
__E_Connecting = static_cast<int32_t>(0x2),
__E_Initializing = static_cast<int32_t>(0x3),
__E_Connected = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Stopped value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_SessionSyncData__Status const Stopped;

/// @brief Field Started value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_SessionSyncData__Status const Started;

/// @brief Field Connecting value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_SessionSyncData__Status const Connecting;

/// @brief Field Initializing value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::__HEU_SessionSyncData__Status const Initializing;

/// @brief Field Connected value: static_cast<int32_t>(0x4)
static ::HoudiniEngineUnity::__HEU_SessionSyncData__Status const Connected;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_SessionSyncData__Status_Unwrapped () const noexcept {
return std::bit_cast<____HEU_SessionSyncData__Status_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_SessionSyncData__Status(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_SessionSyncData__Status(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_SessionSyncData__Status()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_SessionSyncData__Status, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_SessionSyncData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9790))
// CS Name: ::HoudiniEngineUnity::HEU_SessionSyncData*
class CORDL_TYPE HEU_SessionSyncData : public ::System::Object {
public:
// Declarations
using Status = ::HoudiniEngineUnity::__HEU_SessionSyncData__Status;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field _status offset 0x10
 __declspec(property(get=__get__status, put=__set__status)) int32_t  _status;

/// @brief Field _timeLastUpdate offset 0x14
 __declspec(property(get=__get__timeLastUpdate, put=__set__timeLastUpdate)) float_t  _timeLastUpdate;

/// @brief Field _timeStartConnection offset 0x18
 __declspec(property(get=__get__timeStartConnection, put=__set__timeStartConnection)) float_t  _timeStartConnection;

/// @brief Field _newNodeName offset 0x20
 __declspec(property(get=__get__newNodeName, put=__set__newNodeName)) ::StringW  _newNodeName;

/// @brief Field _nodeTypeIndex offset 0x28
 __declspec(property(get=__get__nodeTypeIndex, put=__set__nodeTypeIndex)) int32_t  _nodeTypeIndex;

/// @brief Field _validForConnection offset 0x2c
 __declspec(property(get=__get__validForConnection, put=__set__validForConnection)) bool  _validForConnection;

/// @brief Field _viewportHAPI offset 0x30
 __declspec(property(get=__get__viewportHAPI, put=__set__viewportHAPI)) ::HoudiniEngineUnity::HAPI_Viewport  _viewportHAPI;

/// @brief Field _viewportLocal offset 0x48
 __declspec(property(get=__get__viewportLocal, put=__set__viewportLocal)) ::HoudiniEngineUnity::HAPI_Viewport  _viewportLocal;

/// @brief Field _viewportJustUpdated offset 0x60
 __declspec(property(get=__get__viewportJustUpdated, put=__set__viewportJustUpdated)) bool  _viewportJustUpdated;

/// @brief Field _syncInfo offset 0x61
 __declspec(property(get=__get__syncInfo, put=__set__syncInfo)) ::HoudiniEngineUnity::HAPI_SessionSyncInfo  _syncInfo;

 __declspec(property(get=get_SyncStatus, put=set_SyncStatus)) ::HoudiniEngineUnity::__HEU_SessionSyncData__Status  SyncStatus;

constexpr void __set__status(int32_t  value) ;

constexpr int32_t& __get__status() ;

constexpr int32_t const& __get__status() const;

constexpr void __set__timeLastUpdate(float_t  value) ;

constexpr float_t& __get__timeLastUpdate() ;

constexpr float_t const& __get__timeLastUpdate() const;

constexpr void __set__timeStartConnection(float_t  value) ;

constexpr float_t& __get__timeStartConnection() ;

constexpr float_t const& __get__timeStartConnection() const;

constexpr void __set__newNodeName(::StringW  value) ;

constexpr ::StringW& __get__newNodeName() ;

constexpr ::StringW const& __get__newNodeName() const;

constexpr void __set__nodeTypeIndex(int32_t  value) ;

constexpr int32_t& __get__nodeTypeIndex() ;

constexpr int32_t const& __get__nodeTypeIndex() const;

constexpr void __set__validForConnection(bool  value) ;

constexpr bool& __get__validForConnection() ;

constexpr bool const& __get__validForConnection() const;

constexpr void __set__viewportHAPI(::HoudiniEngineUnity::HAPI_Viewport  value) ;

constexpr ::HoudiniEngineUnity::HAPI_Viewport& __get__viewportHAPI() ;

constexpr ::HoudiniEngineUnity::HAPI_Viewport const& __get__viewportHAPI() const;

constexpr void __set__viewportLocal(::HoudiniEngineUnity::HAPI_Viewport  value) ;

constexpr ::HoudiniEngineUnity::HAPI_Viewport& __get__viewportLocal() ;

constexpr ::HoudiniEngineUnity::HAPI_Viewport const& __get__viewportLocal() const;

constexpr void __set__viewportJustUpdated(bool  value) ;

constexpr bool& __get__viewportJustUpdated() ;

constexpr bool const& __get__viewportJustUpdated() const;

constexpr void __set__syncInfo(::HoudiniEngineUnity::HAPI_SessionSyncInfo  value) ;

constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo& __get__syncInfo() ;

constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo const& __get__syncInfo() const;

/// @brief Method get_SyncStatus addr 0x21a53d0 size 0x14 virtual false final false
inline ::HoudiniEngineUnity::__HEU_SessionSyncData__Status get_SyncStatus() ;

/// @brief Method set_SyncStatus addr 0x21a53e4 size 0xc virtual false final false
inline void set_SyncStatus(::HoudiniEngineUnity::__HEU_SessionSyncData__Status  value) ;

static inline ::HoudiniEngineUnity::HEU_SessionSyncData* New_ctor() ;

/// @brief Method .ctor addr 0x21a2764 size 0xac virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionSyncData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_SessionSyncData(HEU_SessionSyncData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionSyncData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_SessionSyncData(HEU_SessionSyncData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_SessionSyncData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionSyncData, 0x68>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_SessionSyncData__Status, "HoudiniEngineUnity", "HEU_SessionSyncData/Status");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionSyncData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionSyncData*, "HoudiniEngineUnity", "HEU_SessionSyncData");
