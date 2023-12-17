#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Buffers/zzzz__ArrayPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TlsOverPerCoreLockedStacksArrayPool_1)
namespace System {
class Object;
}
namespace System::Buffers {
template<typename T>
struct __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure;
}
namespace System::Buffers {
template<typename T>
class __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System::Buffers {
template<typename T>
class __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack;
}
// Forward declare root types
namespace System::Buffers {
template<typename T>
class TlsOverPerCoreLockedStacksArrayPool_1;
}
namespace System::Buffers {
template<typename T>
class __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack;
}
namespace System::Buffers {
template<typename T>
class __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks;
}
namespace System::Buffers {
template<typename T>
struct __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure;
}
namespace System::Buffers {
template<::il2cpp_utils::il2cpp_reference_type T>
class TlsOverPerCoreLockedStacksArrayPool_1<T>;
}
namespace System::Buffers {
template<>
class TlsOverPerCoreLockedStacksArrayPool_1<char16_t>;
}
namespace System::Buffers {
template<>
class TlsOverPerCoreLockedStacksArrayPool_1<int32_t>;
}
namespace System::Buffers {
template<>
class TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>;
}
namespace System::Buffers {
template<::il2cpp_utils::il2cpp_reference_type T>
class __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>;
}
namespace System::Buffers {
template<>
class __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>;
}
namespace System::Buffers {
template<>
class __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>;
}
namespace System::Buffers {
template<>
class __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>;
}
namespace System::Buffers {
template<::il2cpp_utils::il2cpp_reference_type T>
class __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>;
}
namespace System::Buffers {
template<>
class __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>;
}
namespace System::Buffers {
template<>
class __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>;
}
namespace System::Buffers {
template<>
class __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1);
MARK_GEN_REF_PTR_T(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack);
MARK_GEN_REF_PTR_T(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks);
MARK_GEN_VAL_T(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure);
// Type: ::MemoryPressure
namespace System::Buffers {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3886))
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::MemoryPressure<T>
struct CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped
enum struct ____TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Low value: static_cast<int32_t>(0x0)
static ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> const Low;

/// @brief Field Medium value: static_cast<int32_t>(0x1)
static ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> const Medium;

/// @brief Field High value: static_cast<int32_t>(0x2)
static ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> const High;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped () const noexcept {
return std::bit_cast<____TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::PerCoreLockedStacks
// Type: ::LockedStack
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
// Type: ::PerCoreLockedStacks
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3887)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3887), inst: 741 })
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::PerCoreLockedStacks<T>*
class CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _perCoreStacks offset 0x10
 __declspec(property(get=__get__perCoreStacks, put=__set__perCoreStacks)) ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*>  _perCoreStacks;

constexpr void __set__perCoreStacks(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*>  value) ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*>& __get__perCoreStacks() ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>*>*> const& __get__perCoreStacks() const;

static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TryPush(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>  pressure, ::ArrayW<int32_t,::Array<int32_t>*>  bucketSizes) ;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::PerCoreLockedStacks
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3887))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3887), inst: 292 })
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::PerCoreLockedStacks<T>*
class CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _perCoreStacks offset 0x10
 __declspec(property(get=__get__perCoreStacks, put=__set__perCoreStacks)) ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*>  _perCoreStacks;

constexpr void __set__perCoreStacks(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*>  value) ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*>& __get__perCoreStacks() ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>*>*> const& __get__perCoreStacks() const;

static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TryPush(::ArrayW<char16_t,::Array<char16_t>*>  array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<char16_t,::Array<char16_t>*> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>  pressure, ::ArrayW<int32_t,::Array<int32_t>*>  bucketSizes) ;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::PerCoreLockedStacks
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3887)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3887), inst: 98 })
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::PerCoreLockedStacks<T>*
class CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _perCoreStacks offset 0x10
 __declspec(property(get=__get__perCoreStacks, put=__set__perCoreStacks)) ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*>  _perCoreStacks;

constexpr void __set__perCoreStacks(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*>  value) ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*>& __get__perCoreStacks() ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>*>*> const& __get__perCoreStacks() const;

static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TryPush(::ArrayW<int32_t,::Array<int32_t>*>  array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>  pressure, ::ArrayW<int32_t,::Array<int32_t>*>  bucketSizes) ;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::PerCoreLockedStacks
namespace System::Buffers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3887))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3887), inst: 2 })
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::PerCoreLockedStacks<T>*
class CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _perCoreStacks offset 0x10
 __declspec(property(get=__get__perCoreStacks, put=__set__perCoreStacks)) ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>  _perCoreStacks;

constexpr void __set__perCoreStacks(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>  value) ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>& __get__perCoreStacks() ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*> const& __get__perCoreStacks() const;

static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
inline void TryPush(::ArrayW<T,::Array<T>*>  array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>  pressure, ::ArrayW<int32_t,::Array<int32_t>*>  bucketSizes) ;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::LockedStack
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3888)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3888), inst: 741 })
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::LockedStack<T>*
class CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _arrays offset 0x10
 __declspec(property(get=__get__arrays, put=__set__arrays)) ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  _arrays;

/// @brief Field _count offset 0x18
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _firstStackItemMS offset 0x1c
 __declspec(property(get=__get__firstStackItemMS, put=__set__firstStackItemMS)) uint32_t  _firstStackItemMS;

constexpr void __set__arrays(::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  value) ;

constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>& __get__arrays() ;

constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*> const& __get__arrays() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__firstStackItemMS(uint32_t  value) ;

constexpr uint32_t& __get__firstStackItemMS() ;

constexpr uint32_t const& __get__firstStackItemMS() const;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryPush(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>  pressure, int32_t  bucketSize) ;

static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::LockedStack
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3888)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3888), inst: 292 })
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::LockedStack<T>*
class CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _arrays offset 0x10
 __declspec(property(get=__get__arrays, put=__set__arrays)) ::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>  _arrays;

/// @brief Field _count offset 0x18
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _firstStackItemMS offset 0x1c
 __declspec(property(get=__get__firstStackItemMS, put=__set__firstStackItemMS)) uint32_t  _firstStackItemMS;

constexpr void __set__arrays(::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>  value) ;

constexpr ::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>& __get__arrays() ;

constexpr ::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*> const& __get__arrays() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__firstStackItemMS(uint32_t  value) ;

constexpr uint32_t& __get__firstStackItemMS() ;

constexpr uint32_t const& __get__firstStackItemMS() const;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryPush(::ArrayW<char16_t,::Array<char16_t>*>  array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<char16_t,::Array<char16_t>*> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>  pressure, int32_t  bucketSize) ;

static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::LockedStack
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3888)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3888), inst: 98 })
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::LockedStack<T>*
class CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _arrays offset 0x10
 __declspec(property(get=__get__arrays, put=__set__arrays)) ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  _arrays;

/// @brief Field _count offset 0x18
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _firstStackItemMS offset 0x1c
 __declspec(property(get=__get__firstStackItemMS, put=__set__firstStackItemMS)) uint32_t  _firstStackItemMS;

constexpr void __set__arrays(::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  value) ;

constexpr ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>& __get__arrays() ;

constexpr ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*> const& __get__arrays() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__firstStackItemMS(uint32_t  value) ;

constexpr uint32_t& __get__firstStackItemMS() ;

constexpr uint32_t const& __get__firstStackItemMS() const;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryPush(::ArrayW<int32_t,::Array<int32_t>*>  array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>  pressure, int32_t  bucketSize) ;

static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::LockedStack
namespace System::Buffers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3888))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3888), inst: 2 })
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::LockedStack<T>*
class CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _arrays offset 0x10
 __declspec(property(get=__get__arrays, put=__set__arrays)) ::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>  _arrays;

/// @brief Field _count offset 0x18
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _firstStackItemMS offset 0x1c
 __declspec(property(get=__get__firstStackItemMS, put=__set__firstStackItemMS)) uint32_t  _firstStackItemMS;

constexpr void __set__arrays(::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>  value) ;

constexpr ::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>& __get__arrays() ;

constexpr ::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*> const& __get__arrays() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__firstStackItemMS(uint32_t  value) ;

constexpr uint32_t& __get__firstStackItemMS() ;

constexpr uint32_t const& __get__firstStackItemMS() const;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryPush(::ArrayW<T,::Array<T>*>  array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Trim(uint32_t  tickCount, int32_t  id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>  pressure, int32_t  bucketSize) ;

static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3880)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3880), inst: 769 }), TypeDefinitionIndex(TypeDefinitionIndex(3889))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3889), inst: 741 })
// CS Name: ::System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1<T>*
class CORDL_TYPE TlsOverPerCoreLockedStacksArrayPool_1<uint8_t> : public ::System::Buffers::ArrayPool_1<uint8_t> {
public:
// Declarations
using LockedStack = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>;

using PerCoreLockedStacks = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>;

using MemoryPressure = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Buffers::ArrayPool_1<uint8_t>)]{};

/// @brief Field _bucketArraySizes offset 0x10
 __declspec(property(get=__get__bucketArraySizes, put=__set__bucketArraySizes)) ::ArrayW<int32_t,::Array<int32_t>*>  _bucketArraySizes;

/// @brief Field _buckets offset 0x18
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*>  _buckets;

/// @brief Field _callbackCreated offset 0x20
 __declspec(property(get=__get__callbackCreated, put=__set__callbackCreated)) int32_t  _callbackCreated;

 __declspec(property(get=get_Id)) int32_t  Id;

constexpr void __set__bucketArraySizes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__bucketArraySizes() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__bucketArraySizes() const;

constexpr void __set__buckets(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*>  value) ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*>& __get__buckets() ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>*>*> const& __get__buckets() const;

static inline void setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  value) ;

static inline ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*> getStaticF_t_tlsBuckets() ;

constexpr void __set__callbackCreated(int32_t  value) ;

constexpr int32_t& __get__callbackCreated() ;

constexpr int32_t const& __get__callbackCreated() const;

static inline void setStaticF_s_trimBuffers(bool  value) ;

static inline bool getStaticF_s_trimBuffers() ;

static inline void setStaticF_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>,::System::Object*>*  value) ;

static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>,::System::Object*>* getStaticF_s_allTlsBuckets() ;

static inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method CreatePerCoreLockedStacks addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>* CreatePerCoreLockedStacks(int32_t  bucketIndex) ;

/// @brief Method get_Id addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Id() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Rent(int32_t  minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Return(::ArrayW<uint8_t,::Array<uint8_t>*>  array, bool  clearArray) ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Trim() ;

/// @brief Method Gen2GcCallbackFunc addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Gen2GcCallbackFunc(::System::Object*  target) ;

/// @brief Method GetMemoryPressure addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t> GetMemoryPressure() ;

/// @brief Method GetTrimBuffers addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool GetTrimBuffers() ;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsOverPerCoreLockedStacksArrayPool_1()  = default;
public:


// Fields

// Static field t_tlsBuckets

// Static field s_trimBuffers

// Static field s_allTlsBuckets


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3889)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3880), inst: 769 }), TypeDefinitionIndex(TypeDefinitionIndex(3880))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3889), inst: 292 })
// CS Name: ::System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1<T>*
class CORDL_TYPE TlsOverPerCoreLockedStacksArrayPool_1<char16_t> : public ::System::Buffers::ArrayPool_1<char16_t> {
public:
// Declarations
using LockedStack = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>;

using PerCoreLockedStacks = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>;

using MemoryPressure = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Buffers::ArrayPool_1<char16_t>)]{};

/// @brief Field _bucketArraySizes offset 0x10
 __declspec(property(get=__get__bucketArraySizes, put=__set__bucketArraySizes)) ::ArrayW<int32_t,::Array<int32_t>*>  _bucketArraySizes;

/// @brief Field _buckets offset 0x18
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*>  _buckets;

/// @brief Field _callbackCreated offset 0x20
 __declspec(property(get=__get__callbackCreated, put=__set__callbackCreated)) int32_t  _callbackCreated;

 __declspec(property(get=get_Id)) int32_t  Id;

constexpr void __set__bucketArraySizes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__bucketArraySizes() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__bucketArraySizes() const;

constexpr void __set__buckets(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*>  value) ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*>& __get__buckets() ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>*>*> const& __get__buckets() const;

static inline void setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>  value) ;

static inline ::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*> getStaticF_t_tlsBuckets() ;

constexpr void __set__callbackCreated(int32_t  value) ;

constexpr int32_t& __get__callbackCreated() ;

constexpr int32_t const& __get__callbackCreated() const;

static inline void setStaticF_s_trimBuffers(bool  value) ;

static inline bool getStaticF_s_trimBuffers() ;

static inline void setStaticF_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>,::System::Object*>*  value) ;

static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t,::Array<char16_t>*>,::Array<::ArrayW<char16_t,::Array<char16_t>*>>*>,::System::Object*>* getStaticF_s_allTlsBuckets() ;

static inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<char16_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method CreatePerCoreLockedStacks addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>* CreatePerCoreLockedStacks(int32_t  bucketIndex) ;

/// @brief Method get_Id addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Id() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<char16_t,::Array<char16_t>*> Rent(int32_t  minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Return(::ArrayW<char16_t,::Array<char16_t>*>  array, bool  clearArray) ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Trim() ;

/// @brief Method Gen2GcCallbackFunc addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Gen2GcCallbackFunc(::System::Object*  target) ;

/// @brief Method GetMemoryPressure addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t> GetMemoryPressure() ;

/// @brief Method GetTrimBuffers addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool GetTrimBuffers() ;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsOverPerCoreLockedStacksArrayPool_1()  = default;
public:


// Fields

// Static field t_tlsBuckets

// Static field s_trimBuffers

// Static field s_allTlsBuckets


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3880)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3880), inst: 769 }), TypeDefinitionIndex(TypeDefinitionIndex(3889))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3889), inst: 98 })
// CS Name: ::System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1<T>*
class CORDL_TYPE TlsOverPerCoreLockedStacksArrayPool_1<int32_t> : public ::System::Buffers::ArrayPool_1<int32_t> {
public:
// Declarations
using LockedStack = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>;

using PerCoreLockedStacks = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>;

using MemoryPressure = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Buffers::ArrayPool_1<int32_t>)]{};

/// @brief Field _bucketArraySizes offset 0x10
 __declspec(property(get=__get__bucketArraySizes, put=__set__bucketArraySizes)) ::ArrayW<int32_t,::Array<int32_t>*>  _bucketArraySizes;

/// @brief Field _buckets offset 0x18
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*>  _buckets;

/// @brief Field _callbackCreated offset 0x20
 __declspec(property(get=__get__callbackCreated, put=__set__callbackCreated)) int32_t  _callbackCreated;

 __declspec(property(get=get_Id)) int32_t  Id;

constexpr void __set__bucketArraySizes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__bucketArraySizes() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__bucketArraySizes() const;

constexpr void __set__buckets(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*>  value) ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*>& __get__buckets() ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>*>*> const& __get__buckets() const;

static inline void setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  value) ;

static inline ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*> getStaticF_t_tlsBuckets() ;

constexpr void __set__callbackCreated(int32_t  value) ;

constexpr int32_t& __get__callbackCreated() ;

constexpr int32_t const& __get__callbackCreated() const;

static inline void setStaticF_s_trimBuffers(bool  value) ;

static inline bool getStaticF_s_trimBuffers() ;

static inline void setStaticF_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>,::System::Object*>*  value) ;

static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>,::System::Object*>* getStaticF_s_allTlsBuckets() ;

static inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method CreatePerCoreLockedStacks addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>* CreatePerCoreLockedStacks(int32_t  bucketIndex) ;

/// @brief Method get_Id addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Id() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<int32_t,::Array<int32_t>*> Rent(int32_t  minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Return(::ArrayW<int32_t,::Array<int32_t>*>  array, bool  clearArray) ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Trim() ;

/// @brief Method Gen2GcCallbackFunc addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Gen2GcCallbackFunc(::System::Object*  target) ;

/// @brief Method GetMemoryPressure addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t> GetMemoryPressure() ;

/// @brief Method GetTrimBuffers addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool GetTrimBuffers() ;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsOverPerCoreLockedStacksArrayPool_1()  = default;
public:


// Fields

// Static field t_tlsBuckets

// Static field s_trimBuffers

// Static field s_allTlsBuckets


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
namespace System::Buffers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3880)), TypeDefinitionIndex(TypeDefinitionIndex(3889)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3880), inst: 769 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3889), inst: 2 })
// CS Name: ::System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1<T>*
class CORDL_TYPE TlsOverPerCoreLockedStacksArrayPool_1<T> : public ::System::Buffers::ArrayPool_1<T> {
public:
// Declarations
using LockedStack = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>;

using PerCoreLockedStacks = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>;

using MemoryPressure = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Buffers::ArrayPool_1<T>)]{};

/// @brief Field _bucketArraySizes offset 0x10
 __declspec(property(get=__get__bucketArraySizes, put=__set__bucketArraySizes)) ::ArrayW<int32_t,::Array<int32_t>*>  _bucketArraySizes;

/// @brief Field _buckets offset 0x18
 __declspec(property(get=__get__buckets, put=__set__buckets)) ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>  _buckets;

/// @brief Field _callbackCreated offset 0x20
 __declspec(property(get=__get__callbackCreated, put=__set__callbackCreated)) int32_t  _callbackCreated;

 __declspec(property(get=get_Id)) int32_t  Id;

constexpr void __set__bucketArraySizes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__bucketArraySizes() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__bucketArraySizes() const;

constexpr void __set__buckets(::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>  value) ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>& __get__buckets() ;

constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*> const& __get__buckets() const;

static inline void setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>  value) ;

static inline ::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*> getStaticF_t_tlsBuckets() ;

constexpr void __set__callbackCreated(int32_t  value) ;

constexpr int32_t& __get__callbackCreated() ;

constexpr int32_t const& __get__callbackCreated() const;

static inline void setStaticF_s_trimBuffers(bool  value) ;

static inline bool getStaticF_s_trimBuffers() ;

static inline void setStaticF_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>,::System::Object*>*  value) ;

static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T,::Array<T>*>,::Array<::ArrayW<T,::Array<T>*>>*>,::System::Object*>* getStaticF_s_allTlsBuckets() ;

static inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method CreatePerCoreLockedStacks addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>* CreatePerCoreLockedStacks(int32_t  bucketIndex) ;

/// @brief Method get_Id addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Id() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::ArrayW<T,::Array<T>*> Rent(int32_t  minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Return(::ArrayW<T,::Array<T>*>  array, bool  clearArray) ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Trim() ;

/// @brief Method Gen2GcCallbackFunc addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Gen2GcCallbackFunc(::System::Object*  target) ;

/// @brief Method GetMemoryPressure addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> GetMemoryPressure() ;

/// @brief Method GetTrimBuffers addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool GetTrimBuffers() ;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsOverPerCoreLockedStacksArrayPool_1()  = default;
public:


// Fields

// Static field t_tlsBuckets

// Static field s_trimBuffers

// Static field s_allTlsBuckets


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1/LockedStack");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure");
