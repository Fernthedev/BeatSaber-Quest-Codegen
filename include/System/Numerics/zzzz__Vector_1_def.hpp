#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector_1)
namespace System::Numerics {
struct Register;
}
namespace System {
class IFormattable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Numerics {
template<typename T>
struct __Vector_1__VectorSizeHelper;
}
namespace System {
class Object;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System::Numerics {
template<typename T>
struct Vector_1;
}
namespace System::Numerics {
template<>
struct Vector_1<uint16_t>;
}
namespace System::Numerics {
template<>
struct Vector_1<uint64_t>;
}
namespace System::Numerics {
template<typename T>
struct __Vector_1__VectorSizeHelper;
}
// Write type traits
MARK_GEN_VAL_T(::System::Numerics::Vector_1);
MARK_GEN_VAL_T(::System::Numerics::__Vector_1__VectorSizeHelper);
// Type: ::VectorSizeHelper
namespace System::Numerics {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3552))
// CS Name: ::Vector`1::VectorSizeHelper<T>
struct CORDL_TYPE __Vector_1__VectorSizeHelper : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _placeholder offset 0x0
 __declspec(property(get=__get__placeholder, put=__set__placeholder)) ::System::Numerics::Vector_1<T>  _placeholder;

/// @brief Field _byte offset 0x10
 __declspec(property(get=__get__byte, put=__set__byte)) uint8_t  _byte;

constexpr void __set__placeholder(::System::Numerics::Vector_1<T>  value) ;

constexpr ::System::Numerics::Vector_1<T>& __get__placeholder() ;

constexpr ::System::Numerics::Vector_1<T> const& __get__placeholder() const;

constexpr void __set__byte(uint8_t  value) ;

constexpr uint8_t& __get__byte() ;

constexpr uint8_t const& __get__byte() const;

// Ctor Parameters [CppParam { name: "_placeholder", ty: "::System::Numerics::Vector_1<T>", modifiers: "", def_value: None }, CppParam { name: "_byte", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __Vector_1__VectorSizeHelper(::System::Numerics::Vector_1<T>  _placeholder, uint8_t  _byte) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Vector_1__VectorSizeHelper(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Vector_1__VectorSizeHelper()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Numerics
// Type: System.Numerics::Vector`1
// Type: System.Numerics::Vector`1
namespace System::Numerics {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3553))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3553), inst: 752 })
// CS Name: ::System.Numerics::Vector`1<T>
struct CORDL_TYPE Vector_1<uint16_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using VectorSizeHelper = ::System::Numerics::__Vector_1__VectorSizeHelper<uint16_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field register offset 0x0
 __declspec(property(get=__get__cordl_register, put=__set__cordl_register)) ::System::Numerics::Register  _cordl_register;

 __declspec(property(get=get_Item)) uint16_t  Item[];

/// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::Vector_1<uint16_t>>"
constexpr operator  ::System::IEquatable_1<::System::Numerics::Vector_1<uint16_t>>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

constexpr void __set__cordl_register(::System::Numerics::Register  value) ;

constexpr ::System::Numerics::Register& __get__cordl_register() ;

constexpr ::System::Numerics::Register const& __get__cordl_register() const;

static inline void setStaticF_s_count(int32_t  value) ;

static inline int32_t getStaticF_s_count() ;

static inline void setStaticF_s_zero(::System::Numerics::Vector_1<uint16_t>  value) ;

static inline ::System::Numerics::Vector_1<uint16_t> getStaticF_s_zero() ;

static inline void setStaticF_s_one(::System::Numerics::Vector_1<uint16_t>  value) ;

static inline ::System::Numerics::Vector_1<uint16_t> getStaticF_s_one() ;

static inline void setStaticF_s_allOnes(::System::Numerics::Vector_1<uint16_t>  value) ;

static inline ::System::Numerics::Vector_1<uint16_t> getStaticF_s_allOnes() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t get_Count() ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Numerics::Vector_1<uint16_t> get_Zero() ;

/// @brief Method InitializeCount addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t InitializeCount() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint16_t  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  dataPointer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  dataPointer, int32_t  offset) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::System::Numerics::Register>  existingRegister) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint16_t get_Item(int32_t  index) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::Numerics::Vector_1<uint16_t>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::System::Numerics::Vector_1<uint16_t>  left, ::System::Numerics::Vector_1<uint16_t>  right) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::System::Numerics::Vector_1<uint16_t>  left, ::System::Numerics::Vector_1<uint16_t>  right) ;

/// @brief Method op_Explicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Numerics::Vector_1<uint64_t> op_Explicit___System__Numerics__Vector_1_uint64_t_(::System::Numerics::Vector_1<uint16_t>  value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Numerics::Vector_1<uint16_t> Equals(::System::Numerics::Vector_1<uint16_t>  left, ::System::Numerics::Vector_1<uint16_t>  right) ;

/// @brief Method ScalarEquals addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool ScalarEquals(uint16_t  left, uint16_t  right) ;

/// @brief Method GetOneValue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline uint16_t GetOneValue() ;

/// @brief Method GetAllBitsSetValue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline uint16_t GetAllBitsSetValue() ;

// Ctor Parameters [CppParam { name: "_cordl_register", ty: "::System::Numerics::Register", modifiers: "", def_value: None }]
constexpr Vector_1(::System::Numerics::Register  _cordl_register) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Vector_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Vector_1()  = default;


// Fields

// Static field s_count

// Static field s_zero

// Static field s_one

// Static field s_allOnes


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Numerics
// Type: System.Numerics::Vector`1
namespace System::Numerics {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3553))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3553), inst: 407 })
// CS Name: ::System.Numerics::Vector`1<T>
struct CORDL_TYPE Vector_1<uint64_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using VectorSizeHelper = ::System::Numerics::__Vector_1__VectorSizeHelper<uint64_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field register offset 0x0
 __declspec(property(get=__get__cordl_register, put=__set__cordl_register)) ::System::Numerics::Register  _cordl_register;

 __declspec(property(get=get_Item)) uint64_t  Item[];

/// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::Vector_1<uint64_t>>"
constexpr operator  ::System::IEquatable_1<::System::Numerics::Vector_1<uint64_t>>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

constexpr void __set__cordl_register(::System::Numerics::Register  value) ;

constexpr ::System::Numerics::Register& __get__cordl_register() ;

constexpr ::System::Numerics::Register const& __get__cordl_register() const;

static inline void setStaticF_s_count(int32_t  value) ;

static inline int32_t getStaticF_s_count() ;

static inline void setStaticF_s_zero(::System::Numerics::Vector_1<uint64_t>  value) ;

static inline ::System::Numerics::Vector_1<uint64_t> getStaticF_s_zero() ;

static inline void setStaticF_s_one(::System::Numerics::Vector_1<uint64_t>  value) ;

static inline ::System::Numerics::Vector_1<uint64_t> getStaticF_s_one() ;

static inline void setStaticF_s_allOnes(::System::Numerics::Vector_1<uint64_t>  value) ;

static inline ::System::Numerics::Vector_1<uint64_t> getStaticF_s_allOnes() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t get_Count() ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Numerics::Vector_1<uint64_t> get_Zero() ;

/// @brief Method InitializeCount addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t InitializeCount() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint64_t  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  dataPointer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  dataPointer, int32_t  offset) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::System::Numerics::Register>  existingRegister) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint64_t get_Item(int32_t  index) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::System::Numerics::Vector_1<uint64_t>  other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::System::Numerics::Vector_1<uint64_t>  left, ::System::Numerics::Vector_1<uint64_t>  right) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::System::Numerics::Vector_1<uint64_t>  left, ::System::Numerics::Vector_1<uint64_t>  right) ;

/// @brief Method op_Explicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Numerics::Vector_1<uint64_t> op_Explicit___System__Numerics__Vector_1_uint64_t_(::System::Numerics::Vector_1<uint64_t>  value) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Numerics::Vector_1<uint64_t> Equals(::System::Numerics::Vector_1<uint64_t>  left, ::System::Numerics::Vector_1<uint64_t>  right) ;

/// @brief Method ScalarEquals addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool ScalarEquals(uint64_t  left, uint64_t  right) ;

/// @brief Method GetOneValue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline uint64_t GetOneValue() ;

/// @brief Method GetAllBitsSetValue addr 0x0 size 0xffffffffffffffff virtual false final false
static inline uint64_t GetAllBitsSetValue() ;

// Ctor Parameters [CppParam { name: "_cordl_register", ty: "::System::Numerics::Register", modifiers: "", def_value: None }]
constexpr Vector_1(::System::Numerics::Register  _cordl_register) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Vector_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Vector_1()  = default;


// Fields

// Static field s_count

// Static field s_zero

// Static field s_one

// Static field s_allOnes


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Numerics
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Numerics::Vector_1, "System.Numerics", "Vector`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Numerics::__Vector_1__VectorSizeHelper, "System.Numerics", "Vector`1/VectorSizeHelper");
