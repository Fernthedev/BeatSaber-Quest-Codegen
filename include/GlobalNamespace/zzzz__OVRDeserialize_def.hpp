#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize)
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceShareResultData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceEraseCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SceneCaptureCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceSaveCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpatialAnchorCreateCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceQueryResultsData;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStorageLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDeserialize;
}
namespace GlobalNamespace {
struct __OVRDeserialize__DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SceneCaptureCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceEraseCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceQueryResultsData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceSaveCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceShareResultData;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpatialAnchorCreateCompleteData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRDeserialize);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__DisplayRefreshRateChangedData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SceneCaptureCompleteData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceEraseCompleteData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceListSaveResultData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceQueryResultsData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceSaveCompleteData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceSetComponentStatusCompleteData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpaceShareResultData);
MARK_VAL_T(::GlobalNamespace::__OVRDeserialize__SpatialAnchorCreateCompleteData);
// Type: ::DisplayRefreshRateChangedData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8093))
// CS Name: ::OVRDeserialize::DisplayRefreshRateChangedData
struct CORDL_TYPE __OVRDeserialize__DisplayRefreshRateChangedData : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field FromRefreshRate offset 0x0
 __declspec(property(get=__get_FromRefreshRate, put=__set_FromRefreshRate)) float_t  FromRefreshRate;

/// @brief Field ToRefreshRate offset 0x4
 __declspec(property(get=__get_ToRefreshRate, put=__set_ToRefreshRate)) float_t  ToRefreshRate;

constexpr void __set_FromRefreshRate(float_t  value) ;

constexpr float_t& __get_FromRefreshRate() ;

constexpr float_t const& __get_FromRefreshRate() const;

constexpr void __set_ToRefreshRate(float_t  value) ;

constexpr float_t& __get_ToRefreshRate() ;

constexpr float_t const& __get_ToRefreshRate() const;

// Ctor Parameters [CppParam { name: "FromRefreshRate", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ToRefreshRate", ty: "float_t", modifiers: "", def_value: None }]
constexpr __OVRDeserialize__DisplayRefreshRateChangedData(float_t  FromRefreshRate, float_t  ToRefreshRate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRDeserialize__DisplayRefreshRateChangedData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRDeserialize__DisplayRefreshRateChangedData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__DisplayRefreshRateChangedData, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SpaceQueryResultsData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8094))
// CS Name: ::OVRDeserialize::SpaceQueryResultsData
struct CORDL_TYPE __OVRDeserialize__SpaceQueryResultsData : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field RequestId offset 0x0
 __declspec(property(get=__get_RequestId, put=__set_RequestId)) uint64_t  RequestId;

constexpr void __set_RequestId(uint64_t  value) ;

constexpr uint64_t& __get_RequestId() ;

constexpr uint64_t const& __get_RequestId() const;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr __OVRDeserialize__SpaceQueryResultsData(uint64_t  RequestId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRDeserialize__SpaceQueryResultsData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRDeserialize__SpaceQueryResultsData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceQueryResultsData, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SpaceQueryCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8095))
// CS Name: ::OVRDeserialize::SpaceQueryCompleteData
struct CORDL_TYPE __OVRDeserialize__SpaceQueryCompleteData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RequestId offset 0x0
 __declspec(property(get=__get_RequestId, put=__set_RequestId)) uint64_t  RequestId;

/// @brief Field Result offset 0x8
 __declspec(property(get=__get_Result, put=__set_Result)) int32_t  Result;

constexpr void __set_RequestId(uint64_t  value) ;

constexpr uint64_t& __get_RequestId() ;

constexpr uint64_t const& __get_RequestId() const;

constexpr void __set_Result(int32_t  value) ;

constexpr int32_t& __get_Result() ;

constexpr int32_t const& __get_Result() const;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRDeserialize__SpaceQueryCompleteData(uint64_t  RequestId, int32_t  Result) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRDeserialize__SpaceQueryCompleteData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRDeserialize__SpaceQueryCompleteData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SceneCaptureCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8096))
// CS Name: ::OVRDeserialize::SceneCaptureCompleteData
struct CORDL_TYPE __OVRDeserialize__SceneCaptureCompleteData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RequestId offset 0x0
 __declspec(property(get=__get_RequestId, put=__set_RequestId)) uint64_t  RequestId;

/// @brief Field Result offset 0x8
 __declspec(property(get=__get_Result, put=__set_Result)) int32_t  Result;

constexpr void __set_RequestId(uint64_t  value) ;

constexpr uint64_t& __get_RequestId() ;

constexpr uint64_t const& __get_RequestId() const;

constexpr void __set_Result(int32_t  value) ;

constexpr int32_t& __get_Result() ;

constexpr int32_t const& __get_Result() const;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRDeserialize__SceneCaptureCompleteData(uint64_t  RequestId, int32_t  Result) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRDeserialize__SceneCaptureCompleteData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRDeserialize__SceneCaptureCompleteData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SceneCaptureCompleteData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SpatialAnchorCreateCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8097))
// CS Name: ::OVRDeserialize::SpatialAnchorCreateCompleteData
struct CORDL_TYPE __OVRDeserialize__SpatialAnchorCreateCompleteData : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field RequestId offset 0x0
 __declspec(property(get=__get_RequestId, put=__set_RequestId)) uint64_t  RequestId;

/// @brief Field Result offset 0x8
 __declspec(property(get=__get_Result, put=__set_Result)) int32_t  Result;

/// @brief Field Space offset 0x10
 __declspec(property(get=__get_Space, put=__set_Space)) uint64_t  Space;

/// @brief Field Uuid offset 0x18
 __declspec(property(get=__get_Uuid, put=__set_Uuid)) ::System::Guid  Uuid;

constexpr void __set_RequestId(uint64_t  value) ;

constexpr uint64_t& __get_RequestId() ;

constexpr uint64_t const& __get_RequestId() const;

constexpr void __set_Result(int32_t  value) ;

constexpr int32_t& __get_Result() ;

constexpr int32_t const& __get_Result() const;

constexpr void __set_Space(uint64_t  value) ;

constexpr uint64_t& __get_Space() ;

constexpr uint64_t const& __get_Space() const;

constexpr void __set_Uuid(::System::Guid  value) ;

constexpr ::System::Guid& __get_Uuid() ;

constexpr ::System::Guid const& __get_Uuid() const;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr __OVRDeserialize__SpatialAnchorCreateCompleteData(uint64_t  RequestId, int32_t  Result, uint64_t  Space, ::System::Guid  Uuid) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRDeserialize__SpatialAnchorCreateCompleteData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRDeserialize__SpatialAnchorCreateCompleteData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpatialAnchorCreateCompleteData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SpaceSetComponentStatusCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8098))
// CS Name: ::OVRDeserialize::SpaceSetComponentStatusCompleteData
struct CORDL_TYPE __OVRDeserialize__SpaceSetComponentStatusCompleteData : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field RequestId offset 0x0
 __declspec(property(get=__get_RequestId, put=__set_RequestId)) uint64_t  RequestId;

/// @brief Field Result offset 0x8
 __declspec(property(get=__get_Result, put=__set_Result)) int32_t  Result;

/// @brief Field Space offset 0x10
 __declspec(property(get=__get_Space, put=__set_Space)) uint64_t  Space;

/// @brief Field Uuid offset 0x18
 __declspec(property(get=__get_Uuid, put=__set_Uuid)) ::System::Guid  Uuid;

/// @brief Field ComponentType offset 0x28
 __declspec(property(get=__get_ComponentType, put=__set_ComponentType)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType  ComponentType;

/// @brief Field Enabled offset 0x2c
 __declspec(property(get=__get_Enabled, put=__set_Enabled)) int32_t  Enabled;

constexpr void __set_RequestId(uint64_t  value) ;

constexpr uint64_t& __get_RequestId() ;

constexpr uint64_t const& __get_RequestId() const;

constexpr void __set_Result(int32_t  value) ;

constexpr int32_t& __get_Result() ;

constexpr int32_t const& __get_Result() const;

constexpr void __set_Space(uint64_t  value) ;

constexpr uint64_t& __get_Space() ;

constexpr uint64_t const& __get_Space() const;

constexpr void __set_Uuid(::System::Guid  value) ;

constexpr ::System::Guid& __get_Uuid() ;

constexpr ::System::Guid const& __get_Uuid() const;

constexpr void __set_ComponentType(::GlobalNamespace::__OVRPlugin__SpaceComponentType  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__SpaceComponentType& __get_ComponentType() ;

constexpr ::GlobalNamespace::__OVRPlugin__SpaceComponentType const& __get_ComponentType() const;

constexpr void __set_Enabled(int32_t  value) ;

constexpr int32_t& __get_Enabled() ;

constexpr int32_t const& __get_Enabled() const;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "ComponentType", ty: "::GlobalNamespace::__OVRPlugin__SpaceComponentType", modifiers: "", def_value: None }, CppParam { name: "Enabled", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRDeserialize__SpaceSetComponentStatusCompleteData(uint64_t  RequestId, int32_t  Result, uint64_t  Space, ::System::Guid  Uuid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType  ComponentType, int32_t  Enabled) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRDeserialize__SpaceSetComponentStatusCompleteData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRDeserialize__SpaceSetComponentStatusCompleteData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceSetComponentStatusCompleteData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SpaceSaveCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8099))
// CS Name: ::OVRDeserialize::SpaceSaveCompleteData
struct CORDL_TYPE __OVRDeserialize__SpaceSaveCompleteData : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field RequestId offset 0x0
 __declspec(property(get=__get_RequestId, put=__set_RequestId)) uint64_t  RequestId;

/// @brief Field Space offset 0x8
 __declspec(property(get=__get_Space, put=__set_Space)) uint64_t  Space;

/// @brief Field Result offset 0x10
 __declspec(property(get=__get_Result, put=__set_Result)) int32_t  Result;

/// @brief Field Uuid offset 0x14
 __declspec(property(get=__get_Uuid, put=__set_Uuid)) ::System::Guid  Uuid;

constexpr void __set_RequestId(uint64_t  value) ;

constexpr uint64_t& __get_RequestId() ;

constexpr uint64_t const& __get_RequestId() const;

constexpr void __set_Space(uint64_t  value) ;

constexpr uint64_t& __get_Space() ;

constexpr uint64_t const& __get_Space() const;

constexpr void __set_Result(int32_t  value) ;

constexpr int32_t& __get_Result() ;

constexpr int32_t const& __get_Result() const;

constexpr void __set_Uuid(::System::Guid  value) ;

constexpr ::System::Guid& __get_Uuid() ;

constexpr ::System::Guid const& __get_Uuid() const;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr __OVRDeserialize__SpaceSaveCompleteData(uint64_t  RequestId, uint64_t  Space, int32_t  Result, ::System::Guid  Uuid) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRDeserialize__SpaceSaveCompleteData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRDeserialize__SpaceSaveCompleteData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceSaveCompleteData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SpaceEraseCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8100))
// CS Name: ::OVRDeserialize::SpaceEraseCompleteData
struct CORDL_TYPE __OVRDeserialize__SpaceEraseCompleteData : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field RequestId offset 0x0
 __declspec(property(get=__get_RequestId, put=__set_RequestId)) uint64_t  RequestId;

/// @brief Field Result offset 0x8
 __declspec(property(get=__get_Result, put=__set_Result)) int32_t  Result;

/// @brief Field Uuid offset 0xc
 __declspec(property(get=__get_Uuid, put=__set_Uuid)) ::System::Guid  Uuid;

/// @brief Field Location offset 0x1c
 __declspec(property(get=__get_Location, put=__set_Location)) ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation  Location;

constexpr void __set_RequestId(uint64_t  value) ;

constexpr uint64_t& __get_RequestId() ;

constexpr uint64_t const& __get_RequestId() const;

constexpr void __set_Result(int32_t  value) ;

constexpr int32_t& __get_Result() ;

constexpr int32_t const& __get_Result() const;

constexpr void __set_Uuid(::System::Guid  value) ;

constexpr ::System::Guid& __get_Uuid() ;

constexpr ::System::Guid const& __get_Uuid() const;

constexpr void __set_Location(::GlobalNamespace::__OVRPlugin__SpaceStorageLocation  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation& __get_Location() ;

constexpr ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation const& __get_Location() const;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "Location", ty: "::GlobalNamespace::__OVRPlugin__SpaceStorageLocation", modifiers: "", def_value: None }]
constexpr __OVRDeserialize__SpaceEraseCompleteData(uint64_t  RequestId, int32_t  Result, ::System::Guid  Uuid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation  Location) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRDeserialize__SpaceEraseCompleteData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRDeserialize__SpaceEraseCompleteData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceEraseCompleteData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SpaceShareResultData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8101))
// CS Name: ::OVRDeserialize::SpaceShareResultData
struct CORDL_TYPE __OVRDeserialize__SpaceShareResultData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RequestId offset 0x0
 __declspec(property(get=__get_RequestId, put=__set_RequestId)) uint64_t  RequestId;

/// @brief Field Result offset 0x8
 __declspec(property(get=__get_Result, put=__set_Result)) int32_t  Result;

constexpr void __set_RequestId(uint64_t  value) ;

constexpr uint64_t& __get_RequestId() ;

constexpr uint64_t const& __get_RequestId() const;

constexpr void __set_Result(int32_t  value) ;

constexpr int32_t& __get_Result() ;

constexpr int32_t const& __get_Result() const;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRDeserialize__SpaceShareResultData(uint64_t  RequestId, int32_t  Result) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRDeserialize__SpaceShareResultData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRDeserialize__SpaceShareResultData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceShareResultData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SpaceListSaveResultData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8102))
// CS Name: ::OVRDeserialize::SpaceListSaveResultData
struct CORDL_TYPE __OVRDeserialize__SpaceListSaveResultData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RequestId offset 0x0
 __declspec(property(get=__get_RequestId, put=__set_RequestId)) uint64_t  RequestId;

/// @brief Field Result offset 0x8
 __declspec(property(get=__get_Result, put=__set_Result)) int32_t  Result;

constexpr void __set_RequestId(uint64_t  value) ;

constexpr uint64_t& __get_RequestId() ;

constexpr uint64_t const& __get_RequestId() const;

constexpr void __set_Result(int32_t  value) ;

constexpr int32_t& __get_Result() ;

constexpr int32_t const& __get_Result() const;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRDeserialize__SpaceListSaveResultData(uint64_t  RequestId, int32_t  Result) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRDeserialize__SpaceListSaveResultData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRDeserialize__SpaceListSaveResultData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRDeserialize__SpaceListSaveResultData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRDeserialize
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8103))
// CS Name: ::OVRDeserialize*
class CORDL_TYPE OVRDeserialize : public ::System::Object {
public:
// Declarations
using SpaceListSaveResultData = ::GlobalNamespace::__OVRDeserialize__SpaceListSaveResultData;

using SpaceShareResultData = ::GlobalNamespace::__OVRDeserialize__SpaceShareResultData;

using SpaceEraseCompleteData = ::GlobalNamespace::__OVRDeserialize__SpaceEraseCompleteData;

using SpaceSaveCompleteData = ::GlobalNamespace::__OVRDeserialize__SpaceSaveCompleteData;

using SpaceSetComponentStatusCompleteData = ::GlobalNamespace::__OVRDeserialize__SpaceSetComponentStatusCompleteData;

using SpatialAnchorCreateCompleteData = ::GlobalNamespace::__OVRDeserialize__SpatialAnchorCreateCompleteData;

using SceneCaptureCompleteData = ::GlobalNamespace::__OVRDeserialize__SceneCaptureCompleteData;

using SpaceQueryCompleteData = ::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData;

using SpaceQueryResultsData = ::GlobalNamespace::__OVRDeserialize__SpaceQueryResultsData;

using DisplayRefreshRateChangedData = ::GlobalNamespace::__OVRDeserialize__DisplayRefreshRateChangedData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ByteArrayToStructure addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T ByteArrayToStructure(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

// Ctor Parameters [CppParam { name: "", ty: "OVRDeserialize", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRDeserialize(OVRDeserialize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRDeserialize", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRDeserialize(OVRDeserialize const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRDeserialize()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDeserialize, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDeserialize);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDeserialize*, "", "OVRDeserialize");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__DisplayRefreshRateChangedData, "", "OVRDeserialize/DisplayRefreshRateChangedData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SceneCaptureCompleteData, "", "OVRDeserialize/SceneCaptureCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceEraseCompleteData, "", "OVRDeserialize/SpaceEraseCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceListSaveResultData, "", "OVRDeserialize/SpaceListSaveResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData, "", "OVRDeserialize/SpaceQueryCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceQueryResultsData, "", "OVRDeserialize/SpaceQueryResultsData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceSaveCompleteData, "", "OVRDeserialize/SpaceSaveCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceSetComponentStatusCompleteData, "", "OVRDeserialize/SpaceSetComponentStatusCompleteData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpaceShareResultData, "", "OVRDeserialize/SpaceShareResultData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRDeserialize__SpatialAnchorCreateCompleteData, "", "OVRDeserialize/SpatialAnchorCreateCompleteData");
