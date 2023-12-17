#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomStyleProperty_1)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
struct CustomStyleProperty_1;
}
namespace UnityEngine::UIElements {
template<>
struct CustomStyleProperty_1<::UnityEngine::Color>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
struct CustomStyleProperty_1<T>;
}
namespace UnityEngine::UIElements {
template<>
struct CustomStyleProperty_1<float_t>;
}
namespace UnityEngine::UIElements {
template<>
struct CustomStyleProperty_1<int32_t>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::CustomStyleProperty_1);
// Type: UnityEngine.UIElements::CustomStyleProperty`1
// Type: UnityEngine.UIElements::CustomStyleProperty`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7306))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7306), inst: 391 })
// CS Name: ::UnityEngine.UIElements::CustomStyleProperty`1<T>
struct CORDL_TYPE CustomStyleProperty_1<float_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <name>k__BackingField offset 0x0
 __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField)) ::StringW  _name_k__BackingField;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<float_t>>*() ;

constexpr void __set__name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__name_k__BackingField() ;

constexpr ::StringW const& __get__name_k__BackingField() const;

/// @brief Method get_name addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_name() ;

/// @brief Method set_name addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_name(::StringW  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  propertyName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::CustomStyleProperty_1<float_t>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr CustomStyleProperty_1(::StringW  _name_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CustomStyleProperty_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CustomStyleProperty_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::CustomStyleProperty`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7306))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7306), inst: 293 })
// CS Name: ::UnityEngine.UIElements::CustomStyleProperty`1<T>
struct CORDL_TYPE CustomStyleProperty_1<::UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <name>k__BackingField offset 0x0
 __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField)) ::StringW  _name_k__BackingField;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>*() ;

constexpr void __set__name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__name_k__BackingField() ;

constexpr ::StringW const& __get__name_k__BackingField() const;

/// @brief Method get_name addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_name() ;

/// @brief Method set_name addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_name(::StringW  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  propertyName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr CustomStyleProperty_1(::StringW  _name_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CustomStyleProperty_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CustomStyleProperty_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::CustomStyleProperty`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7306))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7306), inst: 98 })
// CS Name: ::UnityEngine.UIElements::CustomStyleProperty`1<T>
struct CORDL_TYPE CustomStyleProperty_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <name>k__BackingField offset 0x0
 __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField)) ::StringW  _name_k__BackingField;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>>*() ;

constexpr void __set__name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__name_k__BackingField() ;

constexpr ::StringW const& __get__name_k__BackingField() const;

/// @brief Method get_name addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_name() ;

/// @brief Method set_name addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_name(::StringW  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  propertyName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr CustomStyleProperty_1(::StringW  _name_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CustomStyleProperty_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CustomStyleProperty_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::CustomStyleProperty`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7306))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7306), inst: 2 })
// CS Name: ::UnityEngine.UIElements::CustomStyleProperty`1<T>
struct CORDL_TYPE CustomStyleProperty_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <name>k__BackingField offset 0x0
 __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField)) ::StringW  _name_k__BackingField;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>*() ;

constexpr void __set__name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__name_k__BackingField() ;

constexpr ::StringW const& __get__name_k__BackingField() const;

/// @brief Method get_name addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::StringW get_name() ;

/// @brief Method set_name addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_name(::StringW  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  propertyName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::CustomStyleProperty_1<T>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr CustomStyleProperty_1(::StringW  _name_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CustomStyleProperty_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CustomStyleProperty_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::CustomStyleProperty_1, "UnityEngine.UIElements", "CustomStyleProperty`1");
