#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ByReference_1)
// Forward declare root types
namespace System {
template<typename T>
struct ByReference_1;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T>
struct ByReference_1<T>;
}
namespace System {
template<>
struct ByReference_1<char16_t>;
}
namespace System {
template<>
struct ByReference_1<int32_t>;
}
namespace System {
template<>
struct ByReference_1<uint16_t>;
}
namespace System {
template<>
struct ByReference_1<uint32_t>;
}
namespace System {
template<>
struct ByReference_1<uint8_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::ByReference_1);
// Type: System::ByReference`1
// Type: System::ByReference`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2537))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2537), inst: 753 })
// CS Name: ::System::ByReference`1<T>
struct CORDL_TYPE ByReference_1<uint32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::cordl_internals::intptr_t  _value;

 __declspec(property(get=get_Value)) uint32_t  Value;

constexpr void __set__value(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__value() ;

constexpr ::cordl_internals::intptr_t const& __get__value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<uint32_t>  value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<uint32_t> get_Value() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ByReference_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ByReference_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ByReference`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2537))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2537), inst: 752 })
// CS Name: ::System::ByReference`1<T>
struct CORDL_TYPE ByReference_1<uint16_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::cordl_internals::intptr_t  _value;

 __declspec(property(get=get_Value)) uint16_t  Value;

constexpr void __set__value(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__value() ;

constexpr ::cordl_internals::intptr_t const& __get__value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<uint16_t>  value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<uint16_t> get_Value() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ByReference_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ByReference_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ByReference`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2537))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2537), inst: 741 })
// CS Name: ::System::ByReference`1<T>
struct CORDL_TYPE ByReference_1<uint8_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::cordl_internals::intptr_t  _value;

 __declspec(property(get=get_Value)) uint8_t  Value;

constexpr void __set__value(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__value() ;

constexpr ::cordl_internals::intptr_t const& __get__value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<uint8_t>  value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<uint8_t> get_Value() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ByReference_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ByReference_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ByReference`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2537))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2537), inst: 292 })
// CS Name: ::System::ByReference`1<T>
struct CORDL_TYPE ByReference_1<char16_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::cordl_internals::intptr_t  _value;

 __declspec(property(get=get_Value)) char16_t  Value;

constexpr void __set__value(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__value() ;

constexpr ::cordl_internals::intptr_t const& __get__value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<char16_t>  value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<char16_t> get_Value() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ByReference_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ByReference_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ByReference`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2537))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2537), inst: 98 })
// CS Name: ::System::ByReference`1<T>
struct CORDL_TYPE ByReference_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::cordl_internals::intptr_t  _value;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set__value(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__value() ;

constexpr ::cordl_internals::intptr_t const& __get__value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<int32_t>  value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<int32_t> get_Value() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ByReference_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ByReference_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ByReference`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2537))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2537), inst: 2 })
// CS Name: ::System::ByReference`1<T>
struct CORDL_TYPE ByReference_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::cordl_internals::intptr_t  _value;

 __declspec(property(get=get_Value)) T  Value;

constexpr void __set__value(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__value() ;

constexpr ::cordl_internals::intptr_t const& __get__value() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<T>  value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<T> get_Value() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ByReference_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ByReference_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ByReference_1, "System", "ByReference`1");
