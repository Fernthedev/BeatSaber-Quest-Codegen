#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RingBuffer_1)
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
namespace IgnoranceThirdparty {
struct __Volatile__PaddedLong;
}
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
namespace IgnoranceCore {
struct IgnoranceConnectionEvent;
}
namespace IgnoranceCore {
struct IgnoranceIncomingPacket;
}
namespace IgnoranceCore {
struct IgnoranceOutgoingPacket;
}
namespace IgnoranceCore {
struct IgnoranceServerStats;
}
// Forward declare root types
namespace IgnoranceThirdparty {
template<typename T>
class RingBuffer_1;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>;
}
namespace IgnoranceThirdparty {
template<::il2cpp_utils::il2cpp_reference_type T>
class RingBuffer_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::IgnoranceThirdparty::RingBuffer_1);
// Type: IgnoranceThirdparty::RingBuffer`1
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15210))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15210), inst: 4943 })
// CS Name: ::IgnoranceThirdparty::RingBuffer`1<T>*
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceServerStats> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::System::Object)]{};

/// @brief Field _entries offset 0x10
 __declspec(property(get=__get__entries, put=__set__entries)) ::ArrayW<::IgnoranceCore::IgnoranceServerStats,::Array<::IgnoranceCore::IgnoranceServerStats>*>  _entries;

/// @brief Field _modMask offset 0x18
 __declspec(property(get=__get__modMask, put=__set__modMask)) int32_t  _modMask;

/// @brief Field _consumerCursor offset 0x20
 __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _consumerCursor;

/// @brief Field _producerCursor offset 0xa0
 __declspec(property(get=__get__producerCursor, put=__set__producerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _producerCursor;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::IgnoranceCore::IgnoranceServerStats  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceServerStats,::Array<::IgnoranceCore::IgnoranceServerStats>*>  value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceServerStats,::Array<::IgnoranceCore::IgnoranceServerStats>*>& __get__entries() ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceServerStats,::Array<::IgnoranceCore::IgnoranceServerStats>*> const& __get__entries() const;

constexpr void __set__modMask(int32_t  value) ;

constexpr int32_t& __get__modMask() ;

constexpr int32_t const& __get__modMask() const;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__consumerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__consumerCursor() const;

constexpr void __set__producerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__producerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__producerCursor() const;

static inline ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceServerStats get_Item(int64_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int64_t  index, ::IgnoranceCore::IgnoranceServerStats  value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceServerStats Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceServerStats>  obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::IgnoranceCore::IgnoranceServerStats  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t NextPowerOfTwo(int32_t  x) ;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RingBuffer_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15210))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15210), inst: 4942 })
// CS Name: ::IgnoranceThirdparty::RingBuffer`1<T>*
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::System::Object)]{};

/// @brief Field _entries offset 0x10
 __declspec(property(get=__get__entries, put=__set__entries)) ::ArrayW<::IgnoranceCore::IgnoranceOutgoingPacket,::Array<::IgnoranceCore::IgnoranceOutgoingPacket>*>  _entries;

/// @brief Field _modMask offset 0x18
 __declspec(property(get=__get__modMask, put=__set__modMask)) int32_t  _modMask;

/// @brief Field _consumerCursor offset 0x20
 __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _consumerCursor;

/// @brief Field _producerCursor offset 0xa0
 __declspec(property(get=__get__producerCursor, put=__set__producerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _producerCursor;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::IgnoranceCore::IgnoranceOutgoingPacket  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceOutgoingPacket,::Array<::IgnoranceCore::IgnoranceOutgoingPacket>*>  value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceOutgoingPacket,::Array<::IgnoranceCore::IgnoranceOutgoingPacket>*>& __get__entries() ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceOutgoingPacket,::Array<::IgnoranceCore::IgnoranceOutgoingPacket>*> const& __get__entries() const;

constexpr void __set__modMask(int32_t  value) ;

constexpr int32_t& __get__modMask() ;

constexpr int32_t const& __get__modMask() const;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__consumerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__consumerCursor() const;

constexpr void __set__producerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__producerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__producerCursor() const;

static inline ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceOutgoingPacket get_Item(int64_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int64_t  index, ::IgnoranceCore::IgnoranceOutgoingPacket  value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceOutgoingPacket Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceOutgoingPacket>  obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::IgnoranceCore::IgnoranceOutgoingPacket  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t NextPowerOfTwo(int32_t  x) ;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RingBuffer_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15210)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15210), inst: 4941 })
// CS Name: ::IgnoranceThirdparty::RingBuffer`1<T>*
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::System::Object)]{};

/// @brief Field _entries offset 0x10
 __declspec(property(get=__get__entries, put=__set__entries)) ::ArrayW<::IgnoranceCore::IgnoranceIncomingPacket,::Array<::IgnoranceCore::IgnoranceIncomingPacket>*>  _entries;

/// @brief Field _modMask offset 0x18
 __declspec(property(get=__get__modMask, put=__set__modMask)) int32_t  _modMask;

/// @brief Field _consumerCursor offset 0x20
 __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _consumerCursor;

/// @brief Field _producerCursor offset 0xa0
 __declspec(property(get=__get__producerCursor, put=__set__producerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _producerCursor;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::IgnoranceCore::IgnoranceIncomingPacket  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceIncomingPacket,::Array<::IgnoranceCore::IgnoranceIncomingPacket>*>  value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceIncomingPacket,::Array<::IgnoranceCore::IgnoranceIncomingPacket>*>& __get__entries() ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceIncomingPacket,::Array<::IgnoranceCore::IgnoranceIncomingPacket>*> const& __get__entries() const;

constexpr void __set__modMask(int32_t  value) ;

constexpr int32_t& __get__modMask() ;

constexpr int32_t const& __get__modMask() const;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__consumerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__consumerCursor() const;

constexpr void __set__producerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__producerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__producerCursor() const;

static inline ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceIncomingPacket get_Item(int64_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int64_t  index, ::IgnoranceCore::IgnoranceIncomingPacket  value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceIncomingPacket Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceIncomingPacket>  obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::IgnoranceCore::IgnoranceIncomingPacket  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t NextPowerOfTwo(int32_t  x) ;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RingBuffer_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15210))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15210), inst: 4940 })
// CS Name: ::IgnoranceThirdparty::RingBuffer`1<T>*
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::System::Object)]{};

/// @brief Field _entries offset 0x10
 __declspec(property(get=__get__entries, put=__set__entries)) ::ArrayW<::IgnoranceCore::IgnoranceConnectionEvent,::Array<::IgnoranceCore::IgnoranceConnectionEvent>*>  _entries;

/// @brief Field _modMask offset 0x18
 __declspec(property(get=__get__modMask, put=__set__modMask)) int32_t  _modMask;

/// @brief Field _consumerCursor offset 0x20
 __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _consumerCursor;

/// @brief Field _producerCursor offset 0xa0
 __declspec(property(get=__get__producerCursor, put=__set__producerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _producerCursor;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::IgnoranceCore::IgnoranceConnectionEvent  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceConnectionEvent,::Array<::IgnoranceCore::IgnoranceConnectionEvent>*>  value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceConnectionEvent,::Array<::IgnoranceCore::IgnoranceConnectionEvent>*>& __get__entries() ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceConnectionEvent,::Array<::IgnoranceCore::IgnoranceConnectionEvent>*> const& __get__entries() const;

constexpr void __set__modMask(int32_t  value) ;

constexpr int32_t& __get__modMask() ;

constexpr int32_t const& __get__modMask() const;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__consumerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__consumerCursor() const;

constexpr void __set__producerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__producerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__producerCursor() const;

static inline ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceConnectionEvent get_Item(int64_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int64_t  index, ::IgnoranceCore::IgnoranceConnectionEvent  value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceConnectionEvent Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceConnectionEvent>  obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::IgnoranceCore::IgnoranceConnectionEvent  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t NextPowerOfTwo(int32_t  x) ;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RingBuffer_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15210))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15210), inst: 4939 })
// CS Name: ::IgnoranceThirdparty::RingBuffer`1<T>*
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::System::Object)]{};

/// @brief Field _entries offset 0x10
 __declspec(property(get=__get__entries, put=__set__entries)) ::ArrayW<::IgnoranceCore::IgnoranceCommandPacket,::Array<::IgnoranceCore::IgnoranceCommandPacket>*>  _entries;

/// @brief Field _modMask offset 0x18
 __declspec(property(get=__get__modMask, put=__set__modMask)) int32_t  _modMask;

/// @brief Field _consumerCursor offset 0x20
 __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _consumerCursor;

/// @brief Field _producerCursor offset 0xa0
 __declspec(property(get=__get__producerCursor, put=__set__producerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _producerCursor;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::IgnoranceCore::IgnoranceCommandPacket  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceCommandPacket,::Array<::IgnoranceCore::IgnoranceCommandPacket>*>  value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceCommandPacket,::Array<::IgnoranceCore::IgnoranceCommandPacket>*>& __get__entries() ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceCommandPacket,::Array<::IgnoranceCore::IgnoranceCommandPacket>*> const& __get__entries() const;

constexpr void __set__modMask(int32_t  value) ;

constexpr int32_t& __get__modMask() ;

constexpr int32_t const& __get__modMask() const;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__consumerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__consumerCursor() const;

constexpr void __set__producerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__producerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__producerCursor() const;

static inline ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceCommandPacket get_Item(int64_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int64_t  index, ::IgnoranceCore::IgnoranceCommandPacket  value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceCommandPacket Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceCommandPacket>  obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::IgnoranceCore::IgnoranceCommandPacket  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t NextPowerOfTwo(int32_t  x) ;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RingBuffer_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15210))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15210), inst: 4938 })
// CS Name: ::IgnoranceThirdparty::RingBuffer`1<T>*
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceClientStats> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::System::Object)]{};

/// @brief Field _entries offset 0x10
 __declspec(property(get=__get__entries, put=__set__entries)) ::ArrayW<::IgnoranceCore::IgnoranceClientStats,::Array<::IgnoranceCore::IgnoranceClientStats>*>  _entries;

/// @brief Field _modMask offset 0x18
 __declspec(property(get=__get__modMask, put=__set__modMask)) int32_t  _modMask;

/// @brief Field _consumerCursor offset 0x20
 __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _consumerCursor;

/// @brief Field _producerCursor offset 0xa0
 __declspec(property(get=__get__producerCursor, put=__set__producerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _producerCursor;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) ::IgnoranceCore::IgnoranceClientStats  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceClientStats,::Array<::IgnoranceCore::IgnoranceClientStats>*>  value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceClientStats,::Array<::IgnoranceCore::IgnoranceClientStats>*>& __get__entries() ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceClientStats,::Array<::IgnoranceCore::IgnoranceClientStats>*> const& __get__entries() const;

constexpr void __set__modMask(int32_t  value) ;

constexpr int32_t& __get__modMask() ;

constexpr int32_t const& __get__modMask() const;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__consumerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__consumerCursor() const;

constexpr void __set__producerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__producerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__producerCursor() const;

static inline ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceClientStats get_Item(int64_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int64_t  index, ::IgnoranceCore::IgnoranceClientStats  value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IgnoranceCore::IgnoranceClientStats Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceClientStats>  obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::IgnoranceCore::IgnoranceClientStats  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t NextPowerOfTwo(int32_t  x) ;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RingBuffer_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15210))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15210), inst: 2 })
// CS Name: ::IgnoranceThirdparty::RingBuffer`1<T>*
class CORDL_TYPE RingBuffer_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x120};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x120 - sizeof(::System::Object)]{};

/// @brief Field _entries offset 0x10
 __declspec(property(get=__get__entries, put=__set__entries)) ::ArrayW<T,::Array<T>*>  _entries;

/// @brief Field _modMask offset 0x18
 __declspec(property(get=__get__modMask, put=__set__modMask)) int32_t  _modMask;

/// @brief Field _consumerCursor offset 0x20
 __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _consumerCursor;

/// @brief Field _producerCursor offset 0xa0
 __declspec(property(get=__get__producerCursor, put=__set__producerCursor)) ::IgnoranceThirdparty::__Volatile__PaddedLong  _producerCursor;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set__entries(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__entries() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__entries() const;

constexpr void __set__modMask(int32_t  value) ;

constexpr int32_t& __get__modMask() ;

constexpr int32_t const& __get__modMask() const;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__consumerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__consumerCursor() const;

constexpr void __set__producerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong  value) ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __get__producerCursor() ;

constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __get__producerCursor() const;

static inline ::IgnoranceThirdparty::RingBuffer_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Item(int64_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int64_t  index, T  value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool TryDequeue(ByRef<T>  obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(T  item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t NextPowerOfTwo(int32_t  x) ;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RingBuffer_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IgnoranceThirdparty::RingBuffer_1, "IgnoranceThirdparty", "RingBuffer`1");
