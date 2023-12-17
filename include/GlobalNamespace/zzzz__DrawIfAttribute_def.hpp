#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawIfAttribute)
namespace GlobalNamespace {
struct __DrawIfAttribute__DisablingType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __DrawIfAttribute__DisablingType;
}
namespace GlobalNamespace {
class DrawIfAttribute;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__DrawIfAttribute__DisablingType);
MARK_REF_PTR_T(::GlobalNamespace::DrawIfAttribute);
// Type: ::DisablingType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16249))
// CS Name: ::DrawIfAttribute::DisablingType
struct CORDL_TYPE __DrawIfAttribute__DisablingType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____DrawIfAttribute__DisablingType_Unwrapped
enum struct ____DrawIfAttribute__DisablingType_Unwrapped : int32_t {
__E_ReadOnly = static_cast<int32_t>(0x0),
__E_DontDraw = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ReadOnly value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__DrawIfAttribute__DisablingType const ReadOnly;

/// @brief Field DontDraw value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__DrawIfAttribute__DisablingType const DontDraw;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____DrawIfAttribute__DisablingType_Unwrapped () const noexcept {
return std::bit_cast<____DrawIfAttribute__DisablingType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __DrawIfAttribute__DisablingType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DrawIfAttribute__DisablingType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DrawIfAttribute__DisablingType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DrawIfAttribute__DisablingType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::DrawIfAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16250))
// CS Name: ::DrawIfAttribute*
class CORDL_TYPE DrawIfAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
using DisablingType = ::GlobalNamespace::__DrawIfAttribute__DisablingType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::PropertyAttribute)]{};

/// @brief Field propertyName offset 0x10
 __declspec(property(get=__get_propertyName, put=__set_propertyName)) ::StringW  propertyName;

/// @brief Field value offset 0x18
 __declspec(property(get=__get_value, put=__set_value)) ::System::Object*  value;

/// @brief Field orValue offset 0x20
 __declspec(property(get=__get_orValue, put=__set_orValue)) ::System::Object*  orValue;

/// @brief Field disablingType offset 0x28
 __declspec(property(get=__get_disablingType, put=__set_disablingType)) ::GlobalNamespace::__DrawIfAttribute__DisablingType  disablingType;

constexpr void __set_propertyName(::StringW  value) ;

constexpr ::StringW& __get_propertyName() ;

constexpr ::StringW const& __get_propertyName() const;

constexpr void __set_value(::System::Object*  value) ;

constexpr ::System::Object* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_value() const;

constexpr void __set_orValue(::System::Object*  value) ;

constexpr ::System::Object* __get_orValue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_orValue() const;

constexpr void __set_disablingType(::GlobalNamespace::__DrawIfAttribute__DisablingType  value) ;

constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType& __get_disablingType() ;

constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType const& __get_disablingType() const;

static inline ::GlobalNamespace::DrawIfAttribute* New_ctor(::StringW  propertyName, ::System::Object*  value, ::GlobalNamespace::__DrawIfAttribute__DisablingType  disablingType) ;

/// @brief Method .ctor addr 0x2101038 size 0x3c virtual false final false
inline void _ctor(::StringW  propertyName, ::System::Object*  value, ::GlobalNamespace::__DrawIfAttribute__DisablingType  disablingType) ;

static inline ::GlobalNamespace::DrawIfAttribute* New_ctor(::StringW  propertyName, ::System::Object*  value, ::System::Object*  orValue, ::GlobalNamespace::__DrawIfAttribute__DisablingType  disablingType) ;

/// @brief Method .ctor addr 0x2101074 size 0x44 virtual false final false
inline void _ctor(::StringW  propertyName, ::System::Object*  value, ::System::Object*  orValue, ::GlobalNamespace::__DrawIfAttribute__DisablingType  disablingType) ;

// Ctor Parameters [CppParam { name: "", ty: "DrawIfAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawIfAttribute(DrawIfAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawIfAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawIfAttribute(DrawIfAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DrawIfAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DrawIfAttribute, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DrawIfAttribute__DisablingType, "", "DrawIfAttribute/DisablingType");
NEED_NO_BOX(::GlobalNamespace::DrawIfAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DrawIfAttribute*, "", "DrawIfAttribute");
