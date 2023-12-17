#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OptionalArgument_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class OptionalArgument_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class OptionalArgument_1<T>;
}
namespace GlobalNamespace {
template<>
class OptionalArgument_1<bool>;
}
namespace GlobalNamespace {
template<>
class OptionalArgument_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::OptionalArgument_1);
// Type: ::OptionalArgument`1
// Type: ::OptionalArgument`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5978)), TypeDefinitionIndex(TypeDefinitionIndex(5980))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5980), inst: 105 })
// CS Name: ::OptionalArgument`1<T>*
class CORDL_TYPE OptionalArgument_1<bool> : public ::GlobalNamespace::ArgumentBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::ArgumentBase)]{};

/// @brief Field <hasValue>k__BackingField offset 0x28
 __declspec(property(get=__get__hasValue_k__BackingField, put=__set__hasValue_k__BackingField)) bool  _hasValue_k__BackingField;

/// @brief Field _value offset 0x29
 __declspec(property(get=__get__value, put=__set__value)) bool  _value;

 __declspec(property(get=get_value)) bool  value;

 __declspec(property(get=get_isOptional)) bool  isOptional;

 __declspec(property(get=get_hasValue, put=set_hasValue)) bool  hasValue;

constexpr void __set__hasValue_k__BackingField(bool  value) ;

constexpr bool& __get__hasValue_k__BackingField() ;

constexpr bool const& __get__hasValue_k__BackingField() const;

constexpr void __set__value(bool  value) ;

constexpr bool& __get__value() ;

constexpr bool const& __get__value() const;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_value() ;

/// @brief Method get_isOptional addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_isOptional() ;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method set_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_hasValue(bool  value) ;

static inline ::GlobalNamespace::OptionalArgument_1<bool>* New_ctor(::StringW  name, ::StringW  description) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  name, ::StringW  description) ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool GetValueOrDefault(bool  defaultValue) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Reset() ;

/// @brief Method TryParseWithValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryParseWithValue(::StringW  inValue) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "OptionalArgument_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OptionalArgument_1(OptionalArgument_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OptionalArgument_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OptionalArgument_1(OptionalArgument_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OptionalArgument_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OptionalArgument`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5978)), TypeDefinitionIndex(TypeDefinitionIndex(5980))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5980), inst: 98 })
// CS Name: ::OptionalArgument`1<T>*
class CORDL_TYPE OptionalArgument_1<int32_t> : public ::GlobalNamespace::ArgumentBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::ArgumentBase)]{};

/// @brief Field <hasValue>k__BackingField offset 0x28
 __declspec(property(get=__get__hasValue_k__BackingField, put=__set__hasValue_k__BackingField)) bool  _hasValue_k__BackingField;

/// @brief Field _value offset 0x2c
 __declspec(property(get=__get__value, put=__set__value)) int32_t  _value;

 __declspec(property(get=get_value)) int32_t  value;

 __declspec(property(get=get_isOptional)) bool  isOptional;

 __declspec(property(get=get_hasValue, put=set_hasValue)) bool  hasValue;

constexpr void __set__hasValue_k__BackingField(bool  value) ;

constexpr bool& __get__hasValue_k__BackingField() ;

constexpr bool const& __get__hasValue_k__BackingField() const;

constexpr void __set__value(int32_t  value) ;

constexpr int32_t& __get__value() ;

constexpr int32_t const& __get__value() const;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_value() ;

/// @brief Method get_isOptional addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_isOptional() ;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method set_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_hasValue(bool  value) ;

static inline ::GlobalNamespace::OptionalArgument_1<int32_t>* New_ctor(::StringW  name, ::StringW  description) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  name, ::StringW  description) ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetValueOrDefault(int32_t  defaultValue) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Reset() ;

/// @brief Method TryParseWithValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryParseWithValue(::StringW  inValue) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "OptionalArgument_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OptionalArgument_1(OptionalArgument_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OptionalArgument_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OptionalArgument_1(OptionalArgument_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OptionalArgument_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OptionalArgument`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5980)), TypeDefinitionIndex(TypeDefinitionIndex(5978))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5980), inst: 2 })
// CS Name: ::OptionalArgument`1<T>*
class CORDL_TYPE OptionalArgument_1<T> : public ::GlobalNamespace::ArgumentBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::ArgumentBase)]{};

/// @brief Field <hasValue>k__BackingField offset 0x28
 __declspec(property(get=__get__hasValue_k__BackingField, put=__set__hasValue_k__BackingField)) bool  _hasValue_k__BackingField;

/// @brief Field _value offset 0x30
 __declspec(property(get=__get__value, put=__set__value)) T  _value;

 __declspec(property(get=get_value)) T  value;

 __declspec(property(get=get_isOptional)) bool  isOptional;

 __declspec(property(get=get_hasValue, put=set_hasValue)) bool  hasValue;

constexpr void __set__hasValue_k__BackingField(bool  value) ;

constexpr bool& __get__hasValue_k__BackingField() ;

constexpr bool const& __get__hasValue_k__BackingField() const;

constexpr void __set__value(T  value) ;

constexpr T& __get__value() ;

constexpr T const& __get__value() const;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_value() ;

/// @brief Method get_isOptional addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_isOptional() ;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method set_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_hasValue(bool  value) ;

static inline ::GlobalNamespace::OptionalArgument_1<T>* New_ctor(::StringW  name, ::StringW  description) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  name, ::StringW  description) ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetValueOrDefault(T  defaultValue) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Reset() ;

/// @brief Method TryParseWithValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryParseWithValue(::StringW  inValue) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "OptionalArgument_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OptionalArgument_1(OptionalArgument_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OptionalArgument_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OptionalArgument_1(OptionalArgument_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OptionalArgument_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OptionalArgument_1, "", "OptionalArgument`1");
