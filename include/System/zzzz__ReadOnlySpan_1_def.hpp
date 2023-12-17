#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlySpan_1)
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct ByReference_1;
}
// Forward declare root types
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T>
struct ReadOnlySpan_1<T>;
}
namespace System {
template<>
struct ReadOnlySpan_1<char16_t>;
}
namespace System {
template<>
struct ReadOnlySpan_1<int32_t>;
}
namespace System {
template<>
struct ReadOnlySpan_1<uint16_t>;
}
namespace System {
template<>
struct ReadOnlySpan_1<uint32_t>;
}
namespace System {
template<>
struct ReadOnlySpan_1<uint8_t>;
}
// Write type traits
MARK_GEN_VAL_T(::System::ReadOnlySpan_1);
// Type: System::ReadOnlySpan`1
// Type: System::ReadOnlySpan`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 753 })
// CS Name: ::System::ReadOnlySpan`1<T>
struct CORDL_TYPE ReadOnlySpan_1<uint32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _pointer offset 0x0
 __declspec(property(get=__get__pointer, put=__set__pointer)) ::System::ByReference_1<uint32_t>  _pointer;

/// @brief Field _length offset 0x8
 __declspec(property(get=__get__length, put=__set__length)) int32_t  _length;

 __declspec(property(get=get_Item)) uint32_t  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

constexpr void __set__pointer(::System::ByReference_1<uint32_t>  value) ;

constexpr ::System::ByReference_1<uint32_t>& __get__pointer() ;

constexpr ::System::ByReference_1<uint32_t> const& __get__pointer() const;

constexpr void __set__length(int32_t  value) ;

constexpr int32_t& __get__length() ;

constexpr int32_t const& __get__length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint32_t,::Array<uint32_t>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint32_t,::Array<uint32_t>*>  array, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  pointer, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<uint32_t>  ptr, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<uint32_t> get_Item(int32_t  index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::System::Span_1<uint32_t>  destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryCopyTo(::System::Span_1<uint32_t>  destination) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<uint32_t> Slice(int32_t  start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<uint32_t> Slice(int32_t  start, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint32_t,::Array<uint32_t>*> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<uint32_t> op_Implicit___System__ReadOnlySpan_1_uint32_t_(::ArrayW<uint32_t,::Array<uint32_t>*>  array) ;

/// @brief Method get_Empty addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<uint32_t> get_Empty() ;

// Ctor Parameters [CppParam { name: "_pointer", ty: "::System::ByReference_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlySpan_1(::System::ByReference_1<uint32_t>  _pointer, int32_t  _length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlySpan_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlySpan_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ReadOnlySpan`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 752 })
// CS Name: ::System::ReadOnlySpan`1<T>
struct CORDL_TYPE ReadOnlySpan_1<uint16_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _pointer offset 0x0
 __declspec(property(get=__get__pointer, put=__set__pointer)) ::System::ByReference_1<uint16_t>  _pointer;

/// @brief Field _length offset 0x8
 __declspec(property(get=__get__length, put=__set__length)) int32_t  _length;

 __declspec(property(get=get_Item)) uint16_t  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

constexpr void __set__pointer(::System::ByReference_1<uint16_t>  value) ;

constexpr ::System::ByReference_1<uint16_t>& __get__pointer() ;

constexpr ::System::ByReference_1<uint16_t> const& __get__pointer() const;

constexpr void __set__length(int32_t  value) ;

constexpr int32_t& __get__length() ;

constexpr int32_t const& __get__length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint16_t,::Array<uint16_t>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint16_t,::Array<uint16_t>*>  array, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  pointer, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<uint16_t>  ptr, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<uint16_t> get_Item(int32_t  index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::System::Span_1<uint16_t>  destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryCopyTo(::System::Span_1<uint16_t>  destination) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<uint16_t> Slice(int32_t  start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<uint16_t> Slice(int32_t  start, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint16_t,::Array<uint16_t>*> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<uint16_t> op_Implicit___System__ReadOnlySpan_1_uint16_t_(::ArrayW<uint16_t,::Array<uint16_t>*>  array) ;

/// @brief Method get_Empty addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<uint16_t> get_Empty() ;

// Ctor Parameters [CppParam { name: "_pointer", ty: "::System::ByReference_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlySpan_1(::System::ByReference_1<uint16_t>  _pointer, int32_t  _length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlySpan_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlySpan_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ReadOnlySpan`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 741 })
// CS Name: ::System::ReadOnlySpan`1<T>
struct CORDL_TYPE ReadOnlySpan_1<uint8_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _pointer offset 0x0
 __declspec(property(get=__get__pointer, put=__set__pointer)) ::System::ByReference_1<uint8_t>  _pointer;

/// @brief Field _length offset 0x8
 __declspec(property(get=__get__length, put=__set__length)) int32_t  _length;

 __declspec(property(get=get_Item)) uint8_t  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

constexpr void __set__pointer(::System::ByReference_1<uint8_t>  value) ;

constexpr ::System::ByReference_1<uint8_t>& __get__pointer() ;

constexpr ::System::ByReference_1<uint8_t> const& __get__pointer() const;

constexpr void __set__length(int32_t  value) ;

constexpr int32_t& __get__length() ;

constexpr int32_t const& __get__length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  pointer, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<uint8_t>  ptr, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<uint8_t> get_Item(int32_t  index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::System::Span_1<uint8_t>  destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryCopyTo(::System::Span_1<uint8_t>  destination) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<uint8_t> Slice(int32_t  start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<uint8_t> Slice(int32_t  start, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<uint8_t> op_Implicit___System__ReadOnlySpan_1_uint8_t_(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method get_Empty addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_Empty() ;

// Ctor Parameters [CppParam { name: "_pointer", ty: "::System::ByReference_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlySpan_1(::System::ByReference_1<uint8_t>  _pointer, int32_t  _length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlySpan_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlySpan_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ReadOnlySpan`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 292 })
// CS Name: ::System::ReadOnlySpan`1<T>
struct CORDL_TYPE ReadOnlySpan_1<char16_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _pointer offset 0x0
 __declspec(property(get=__get__pointer, put=__set__pointer)) ::System::ByReference_1<char16_t>  _pointer;

/// @brief Field _length offset 0x8
 __declspec(property(get=__get__length, put=__set__length)) int32_t  _length;

 __declspec(property(get=get_Item)) char16_t  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

constexpr void __set__pointer(::System::ByReference_1<char16_t>  value) ;

constexpr ::System::ByReference_1<char16_t>& __get__pointer() ;

constexpr ::System::ByReference_1<char16_t> const& __get__pointer() const;

constexpr void __set__length(int32_t  value) ;

constexpr int32_t& __get__length() ;

constexpr int32_t const& __get__length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<char16_t,::Array<char16_t>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<char16_t,::Array<char16_t>*>  array, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  pointer, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<char16_t>  ptr, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<char16_t> get_Item(int32_t  index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::System::Span_1<char16_t>  destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryCopyTo(::System::Span_1<char16_t>  destination) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<char16_t> Slice(int32_t  start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<char16_t> Slice(int32_t  start, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<char16_t,::Array<char16_t>*> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<char16_t> op_Implicit___System__ReadOnlySpan_1_char16_t_(::ArrayW<char16_t,::Array<char16_t>*>  array) ;

/// @brief Method get_Empty addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<char16_t> get_Empty() ;

// Ctor Parameters [CppParam { name: "_pointer", ty: "::System::ByReference_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlySpan_1(::System::ByReference_1<char16_t>  _pointer, int32_t  _length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlySpan_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlySpan_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ReadOnlySpan`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 98 })
// CS Name: ::System::ReadOnlySpan`1<T>
struct CORDL_TYPE ReadOnlySpan_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _pointer offset 0x0
 __declspec(property(get=__get__pointer, put=__set__pointer)) ::System::ByReference_1<int32_t>  _pointer;

/// @brief Field _length offset 0x8
 __declspec(property(get=__get__length, put=__set__length)) int32_t  _length;

 __declspec(property(get=get_Item)) int32_t  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

constexpr void __set__pointer(::System::ByReference_1<int32_t>  value) ;

constexpr ::System::ByReference_1<int32_t>& __get__pointer() ;

constexpr ::System::ByReference_1<int32_t> const& __get__pointer() const;

constexpr void __set__length(int32_t  value) ;

constexpr int32_t& __get__length() ;

constexpr int32_t const& __get__length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<int32_t,::Array<int32_t>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<int32_t,::Array<int32_t>*>  array, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  pointer, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<int32_t>  ptr, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<int32_t> get_Item(int32_t  index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::System::Span_1<int32_t>  destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryCopyTo(::System::Span_1<int32_t>  destination) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<int32_t> Slice(int32_t  start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<int32_t> Slice(int32_t  start, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<int32_t> op_Implicit___System__ReadOnlySpan_1_int32_t_(::ArrayW<int32_t,::Array<int32_t>*>  array) ;

/// @brief Method get_Empty addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<int32_t> get_Empty() ;

// Ctor Parameters [CppParam { name: "_pointer", ty: "::System::ByReference_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlySpan_1(::System::ByReference_1<int32_t>  _pointer, int32_t  _length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlySpan_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlySpan_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ReadOnlySpan`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 2 })
// CS Name: ::System::ReadOnlySpan`1<T>
struct CORDL_TYPE ReadOnlySpan_1<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _pointer offset 0x0
 __declspec(property(get=__get__pointer, put=__set__pointer)) ::System::ByReference_1<T>  _pointer;

/// @brief Field _length offset 0x8
 __declspec(property(get=__get__length, put=__set__length)) int32_t  _length;

 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

constexpr void __set__pointer(::System::ByReference_1<T>  value) ;

constexpr ::System::ByReference_1<T>& __get__pointer() ;

constexpr ::System::ByReference_1<T> const& __get__pointer() const;

constexpr void __set__length(int32_t  value) ;

constexpr int32_t& __get__length() ;

constexpr int32_t const& __get__length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<T,::Array<T>*>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<T,::Array<T>*>  array, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  pointer, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<T>  ptr, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ByRef<T> get_Item(int32_t  index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::System::Span_1<T>  destination) ;

/// @brief Method TryCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryCopyTo(::System::Span_1<T>  destination) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<T> Slice(int32_t  start) ;

/// @brief Method Slice addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ReadOnlySpan_1<T> Slice(int32_t  start, int32_t  length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> ToArray() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<T> op_Implicit___System__ReadOnlySpan_1_T_(::ArrayW<T,::Array<T>*>  array) ;

/// @brief Method get_Empty addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::ReadOnlySpan_1<T> get_Empty() ;

// Ctor Parameters [CppParam { name: "_pointer", ty: "::System::ByReference_1<T>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlySpan_1(::System::ByReference_1<T>  _pointer, int32_t  _length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadOnlySpan_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadOnlySpan_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ReadOnlySpan_1, "System", "ReadOnlySpan`1");
