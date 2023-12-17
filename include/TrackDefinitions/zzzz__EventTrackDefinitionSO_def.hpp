#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventTrackDefinitionSO)
namespace TrackDefinitions {
struct __EventTrackDefinitionSO__DataTransformationType;
}
namespace TrackDefinitions {
struct __EventTrackDefinitionSO__MarkerType;
}
// Forward declare root types
namespace TrackDefinitions {
struct __EventTrackDefinitionSO__DataTransformationType;
}
namespace TrackDefinitions {
struct __EventTrackDefinitionSO__MarkerType;
}
namespace TrackDefinitions {
class EventTrackDefinitionSO;
}
// Write type traits
MARK_VAL_T(::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType);
MARK_VAL_T(::TrackDefinitions::__EventTrackDefinitionSO__MarkerType);
MARK_REF_PTR_T(::TrackDefinitions::EventTrackDefinitionSO);
// Type: ::DataTransformationType
namespace TrackDefinitions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16062))
// CS Name: ::EventTrackDefinitionSO::DataTransformationType
struct CORDL_TYPE __EventTrackDefinitionSO__DataTransformationType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____EventTrackDefinitionSO__DataTransformationType_Unwrapped
enum struct ____EventTrackDefinitionSO__DataTransformationType_Unwrapped : int32_t {
__E_NoTransformation = static_cast<int32_t>(0x0),
__E_Light = static_cast<int32_t>(0x1),
__E_DeltaRotation = static_cast<int32_t>(0x2),
__E_Switch = static_cast<int32_t>(0x3),
__E_TurnOffValueDuration = static_cast<int32_t>(0x4),
__E_ValueDuration = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoTransformation value: static_cast<int32_t>(0x0)
static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const NoTransformation;

/// @brief Field Light value: static_cast<int32_t>(0x1)
static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const Light;

/// @brief Field DeltaRotation value: static_cast<int32_t>(0x2)
static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const DeltaRotation;

/// @brief Field Switch value: static_cast<int32_t>(0x3)
static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const Switch;

/// @brief Field TurnOffValueDuration value: static_cast<int32_t>(0x4)
static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const TurnOffValueDuration;

/// @brief Field ValueDuration value: static_cast<int32_t>(0x5)
static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const ValueDuration;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____EventTrackDefinitionSO__DataTransformationType_Unwrapped () const noexcept {
return std::bit_cast<____EventTrackDefinitionSO__DataTransformationType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __EventTrackDefinitionSO__DataTransformationType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EventTrackDefinitionSO__DataTransformationType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EventTrackDefinitionSO__DataTransformationType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, 0x4>, "Size mismatch!");

} // namespace end def TrackDefinitions
// Type: ::MarkerType
namespace TrackDefinitions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16063))
// CS Name: ::EventTrackDefinitionSO::MarkerType
struct CORDL_TYPE __EventTrackDefinitionSO__MarkerType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____EventTrackDefinitionSO__MarkerType_Unwrapped
enum struct ____EventTrackDefinitionSO__MarkerType_Unwrapped : int32_t {
__E_BasicMarker = static_cast<int32_t>(0x0),
__E_DurationMarker = static_cast<int32_t>(0x1),
__E_LightMarker = static_cast<int32_t>(0x2),
__E_TextMarker = static_cast<int32_t>(0x3),
__E_TooltipMarker = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field BasicMarker value: static_cast<int32_t>(0x0)
static ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const BasicMarker;

/// @brief Field DurationMarker value: static_cast<int32_t>(0x1)
static ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const DurationMarker;

/// @brief Field LightMarker value: static_cast<int32_t>(0x2)
static ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const LightMarker;

/// @brief Field TextMarker value: static_cast<int32_t>(0x3)
static ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const TextMarker;

/// @brief Field TooltipMarker value: static_cast<int32_t>(0x4)
static ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const TooltipMarker;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____EventTrackDefinitionSO__MarkerType_Unwrapped () const noexcept {
return std::bit_cast<____EventTrackDefinitionSO__MarkerType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __EventTrackDefinitionSO__MarkerType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EventTrackDefinitionSO__MarkerType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EventTrackDefinitionSO__MarkerType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, 0x4>, "Size mismatch!");

} // namespace end def TrackDefinitions
// Type: TrackDefinitions::EventTrackDefinitionSO
namespace TrackDefinitions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16064))
// CS Name: ::TrackDefinitions::EventTrackDefinitionSO*
class CORDL_TYPE EventTrackDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using MarkerType = ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType;

using DataTransformationType = ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _dataTransformationType offset 0x18
 __declspec(property(get=__get__dataTransformationType, put=__set__dataTransformationType)) ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType  _dataTransformationType;

/// @brief Field _markerType offset 0x1c
 __declspec(property(get=__get__markerType, put=__set__markerType)) ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType  _markerType;

/// @brief Field _visible offset 0x20
 __declspec(property(get=__get__visible, put=__set__visible)) bool  _visible;

/// @brief Field _needsFiltering offset 0x21
 __declspec(property(get=__get__needsFiltering, put=__set__needsFiltering)) bool  _needsFiltering;

 __declspec(property(get=get_visible)) bool  visible;

 __declspec(property(get=get_dataTransformation)) ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType  dataTransformation;

 __declspec(property(get=get_markerType)) ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType  markerType;

 __declspec(property(get=get_needsFiltering)) bool  needsFiltering;

constexpr void __set__dataTransformationType(::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType  value) ;

constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType& __get__dataTransformationType() ;

constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const& __get__dataTransformationType() const;

constexpr void __set__markerType(::TrackDefinitions::__EventTrackDefinitionSO__MarkerType  value) ;

constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType& __get__markerType() ;

constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const& __get__markerType() const;

constexpr void __set__visible(bool  value) ;

constexpr bool& __get__visible() ;

constexpr bool const& __get__visible() const;

constexpr void __set__needsFiltering(bool  value) ;

constexpr bool& __get__needsFiltering() ;

constexpr bool const& __get__needsFiltering() const;

/// @brief Method get_visible addr 0x2a0b030 size 0x8 virtual false final false
inline bool get_visible() ;

/// @brief Method get_dataTransformation addr 0x2a0b038 size 0x8 virtual false final false
inline ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType get_dataTransformation() ;

/// @brief Method get_markerType addr 0x2a0b040 size 0x8 virtual false final false
inline ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType get_markerType() ;

/// @brief Method get_needsFiltering addr 0x2a0b048 size 0x8 virtual false final false
inline bool get_needsFiltering() ;

static inline ::TrackDefinitions::EventTrackDefinitionSO* New_ctor() ;

/// @brief Method .ctor addr 0x2a0b050 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EventTrackDefinitionSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventTrackDefinitionSO(EventTrackDefinitionSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventTrackDefinitionSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventTrackDefinitionSO(EventTrackDefinitionSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventTrackDefinitionSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::EventTrackDefinitionSO, 0x28>, "Size mismatch!");

} // namespace end def TrackDefinitions
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, "TrackDefinitions", "EventTrackDefinitionSO/DataTransformationType");
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, "TrackDefinitions", "EventTrackDefinitionSO/MarkerType");
NEED_NO_BOX(::TrackDefinitions::EventTrackDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::EventTrackDefinitionSO*, "TrackDefinitions", "EventTrackDefinitionSO");
