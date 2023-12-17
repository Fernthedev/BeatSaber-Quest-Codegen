#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ThreadSafeStore_2)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Newtonsoft::Json::Serialization {
struct __DefaultSerializationBinder__TypeNameKey;
}
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__TypeConvertKey;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
namespace Newtonsoft::Json::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>;
}
namespace Newtonsoft::Json::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>;
}
namespace Newtonsoft::Json::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class ThreadSafeStore_2<TKey,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::ThreadSafeStore_2);
// Type: Newtonsoft.Json.Utilities::ThreadSafeStore`2
// Type: Newtonsoft.Json.Utilities::ThreadSafeStore`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11868))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11868), inst: 1665 })
// CS Name: ::Newtonsoft.Json.Utilities::ThreadSafeStore`2<TKey,TValue>*
class CORDL_TYPE ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _lock offset 0x10
 __declspec(property(get=__get__lock, put=__set__lock)) ::System::Object*  _lock;

/// @brief Field _store offset 0x18
 __declspec(property(get=__get__store, put=__set__store)) ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*  _store;

/// @brief Field _creator offset 0x20
 __declspec(property(get=__get__creator, put=__set__creator)) ::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*  _creator;

constexpr void __set__lock(::System::Object*  value) ;

constexpr ::System::Object* __get__lock() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__lock() const;

constexpr void __set__store(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>* __get__store() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*> __get__store() const;

constexpr void __set__creator(::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*  value) ;

constexpr ::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>* __get__creator() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*> __get__creator() const;

static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>* New_ctor(::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*  creator) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,TValue>*  creator) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue Get(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  key) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue AddValue(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey  key) ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadSafeStore_2(ThreadSafeStore_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadSafeStore_2(ThreadSafeStore_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadSafeStore_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ThreadSafeStore`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11868)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11868), inst: 1664 })
// CS Name: ::Newtonsoft.Json.Utilities::ThreadSafeStore`2<TKey,TValue>*
class CORDL_TYPE ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _lock offset 0x10
 __declspec(property(get=__get__lock, put=__set__lock)) ::System::Object*  _lock;

/// @brief Field _store offset 0x18
 __declspec(property(get=__get__store, put=__set__store)) ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*  _store;

/// @brief Field _creator offset 0x20
 __declspec(property(get=__get__creator, put=__set__creator)) ::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*  _creator;

constexpr void __set__lock(::System::Object*  value) ;

constexpr ::System::Object* __get__lock() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__lock() const;

constexpr void __set__store(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>* __get__store() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*> __get__store() const;

constexpr void __set__creator(::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*  value) ;

constexpr ::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>* __get__creator() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*> __get__creator() const;

static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>* New_ctor(::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*  creator) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,TValue>*  creator) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue Get(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  key) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue AddValue(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey  key) ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadSafeStore_2(ThreadSafeStore_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadSafeStore_2(ThreadSafeStore_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadSafeStore_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ThreadSafeStore`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11868))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11868), inst: 81 })
// CS Name: ::Newtonsoft.Json.Utilities::ThreadSafeStore`2<TKey,TValue>*
class CORDL_TYPE ThreadSafeStore_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _lock offset 0x10
 __declspec(property(get=__get__lock, put=__set__lock)) ::System::Object*  _lock;

/// @brief Field _store offset 0x18
 __declspec(property(get=__get__store, put=__set__store)) ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _store;

/// @brief Field _creator offset 0x20
 __declspec(property(get=__get__creator, put=__set__creator)) ::System::Func_2<TKey,TValue>*  _creator;

constexpr void __set__lock(::System::Object*  value) ;

constexpr ::System::Object* __get__lock() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__lock() const;

constexpr void __set__store(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* __get__store() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey,TValue>*> __get__store() const;

constexpr void __set__creator(::System::Func_2<TKey,TValue>*  value) ;

constexpr ::System::Func_2<TKey,TValue>* __get__creator() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TKey,TValue>*> __get__creator() const;

static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>* New_ctor(::System::Func_2<TKey,TValue>*  creator) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_2<TKey,TValue>*  creator) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue Get(TKey  key) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue AddValue(TKey  key) ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadSafeStore_2(ThreadSafeStore_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadSafeStore_2(ThreadSafeStore_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadSafeStore_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::ThreadSafeStore_2, "Newtonsoft.Json.Utilities", "ThreadSafeStore`2");
