#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionObjective)
namespace GlobalNamespace {
struct __MissionObjective__ReferenceValueComparisonType;
}
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MissionObjective__ReferenceValueComparisonType;
}
namespace GlobalNamespace {
class MissionObjective;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType);
MARK_REF_PTR_T(::GlobalNamespace::MissionObjective);
// Type: ::ReferenceValueComparisonType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4459))
// CS Name: ::MissionObjective::ReferenceValueComparisonType
struct CORDL_TYPE __MissionObjective__ReferenceValueComparisonType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MissionObjective__ReferenceValueComparisonType_Unwrapped
enum struct ____MissionObjective__ReferenceValueComparisonType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Equal = static_cast<int32_t>(0x1),
__E_Max = static_cast<int32_t>(0x2),
__E_Min = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType const None;

/// @brief Field Equal value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType const Equal;

/// @brief Field Max value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType const Max;

/// @brief Field Min value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType const Min;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MissionObjective__ReferenceValueComparisonType_Unwrapped () const noexcept {
return std::bit_cast<____MissionObjective__ReferenceValueComparisonType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MissionObjective__ReferenceValueComparisonType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MissionObjective__ReferenceValueComparisonType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MissionObjective__ReferenceValueComparisonType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MissionObjective
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4460))
// CS Name: ::MissionObjective*
class CORDL_TYPE MissionObjective : public ::System::Object {
public:
// Declarations
using ReferenceValueComparisonType = ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _type offset 0x10
 __declspec(property(get=__get__type, put=__set__type)) ::GlobalNamespace::MissionObjectiveTypeSO*  _type;

/// @brief Field _referenceValueComparisonType offset 0x18
 __declspec(property(get=__get__referenceValueComparisonType, put=__set__referenceValueComparisonType)) ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType  _referenceValueComparisonType;

/// @brief Field _referenceValue offset 0x1c
 __declspec(property(get=__get__referenceValue, put=__set__referenceValue)) int32_t  _referenceValue;

 __declspec(property(get=get_type)) ::GlobalNamespace::MissionObjectiveTypeSO*  type;

 __declspec(property(get=get_referenceValueComparisonType)) ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType  referenceValueComparisonType;

 __declspec(property(get=get_referenceValue)) int32_t  referenceValue;

constexpr void __set__type(::GlobalNamespace::MissionObjectiveTypeSO*  value) ;

constexpr ::GlobalNamespace::MissionObjectiveTypeSO* __get__type() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveTypeSO*> __get__type() const;

constexpr void __set__referenceValueComparisonType(::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType  value) ;

constexpr ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType& __get__referenceValueComparisonType() ;

constexpr ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType const& __get__referenceValueComparisonType() const;

constexpr void __set__referenceValue(int32_t  value) ;

constexpr int32_t& __get__referenceValue() ;

constexpr int32_t const& __get__referenceValue() const;

/// @brief Method get_type addr 0x2352ae8 size 0x8 virtual false final false
inline ::GlobalNamespace::MissionObjectiveTypeSO* get_type() ;

/// @brief Method get_referenceValueComparisonType addr 0x2352af0 size 0x8 virtual false final false
inline ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType get_referenceValueComparisonType() ;

/// @brief Method get_referenceValue addr 0x2352af8 size 0x8 virtual false final false
inline int32_t get_referenceValue() ;

/// @brief Method op_Equality addr 0x2352b00 size 0xbc virtual false final false
static inline bool op_Equality(::GlobalNamespace::MissionObjective*  obj1, ::GlobalNamespace::MissionObjective*  obj2) ;

/// @brief Method op_Inequality addr 0x2352bbc size 0x18 virtual false final false
static inline bool op_Inequality(::GlobalNamespace::MissionObjective*  obj1, ::GlobalNamespace::MissionObjective*  obj2) ;

/// @brief Method Equals addr 0x2352bd4 size 0x10c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2352ce0 size 0x64 virtual true final false
inline int32_t GetHashCode() ;

static inline ::GlobalNamespace::MissionObjective* New_ctor() ;

/// @brief Method .ctor addr 0x2352d44 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjective", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionObjective(MissionObjective && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjective", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionObjective(MissionObjective const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionObjective()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjective, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType, "", "MissionObjective/ReferenceValueComparisonType");
NEED_NO_BOX(::GlobalNamespace::MissionObjective);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjective*, "", "MissionObjective");
