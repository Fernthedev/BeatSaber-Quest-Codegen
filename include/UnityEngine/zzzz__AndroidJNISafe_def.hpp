#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNISafe)
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNISafe;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJNISafe);
// Type: UnityEngine::AndroidJNISafe
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14907))
// CS Name: ::UnityEngine::AndroidJNISafe*
class CORDL_TYPE AndroidJNISafe : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CheckException addr 0x2c7dc5c size 0x358 virtual false final false
static inline void CheckException() ;

/// @brief Method DeleteGlobalRef addr 0x2c7e204 size 0x8c virtual false final false
static inline void DeleteGlobalRef(::cordl_internals::intptr_t  globalref) ;

/// @brief Method DeleteWeakGlobalRef addr 0x2c7e2cc size 0x8c virtual false final false
static inline void DeleteWeakGlobalRef(::cordl_internals::intptr_t  globalref) ;

/// @brief Method DeleteLocalRef addr 0x2c7e394 size 0x8c virtual false final false
static inline void DeleteLocalRef(::cordl_internals::intptr_t  localref) ;

/// @brief Method NewString addr 0x2c7e45c size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t NewString(::StringW  chars) ;

/// @brief Method GetStringChars addr 0x2c7e538 size 0xa0 virtual false final false
static inline ::StringW GetStringChars(::cordl_internals::intptr_t  str) ;

/// @brief Method GetObjectClass addr 0x2c7e614 size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t GetObjectClass(::cordl_internals::intptr_t  ptr) ;

/// @brief Method GetStaticMethodID addr 0x2c7e6f0 size 0xb8 virtual false final false
static inline ::cordl_internals::intptr_t GetStaticMethodID(::cordl_internals::intptr_t  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetMethodID addr 0x2c7e7a8 size 0xb8 virtual false final false
static inline ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t  obj, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetFieldID addr 0x2c7e860 size 0xb8 virtual false final false
static inline ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticFieldID addr 0x2c7e96c size 0xb8 virtual false final false
static inline ::cordl_internals::intptr_t GetStaticFieldID(::cordl_internals::intptr_t  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method FromReflectedMethod addr 0x2c7ea78 size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t FromReflectedMethod(::cordl_internals::intptr_t  refMethod) ;

/// @brief Method FindClass addr 0x2c7eb54 size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t FindClass(::StringW  name) ;

/// @brief Method NewObject addr 0x2c7ebf4 size 0xb8 virtual false final false
static inline ::cordl_internals::intptr_t NewObject(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method SetStaticObjectField addr 0x2c7ed00 size 0xbc virtual false final false
static inline void SetStaticObjectField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID, ::cordl_internals::intptr_t  val) ;

/// @brief Method SetStaticStringField addr 0x2c7ee10 size 0xbc virtual false final false
static inline void SetStaticStringField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID, ::StringW  val) ;

/// @brief Method SetStaticCharField addr 0x2c7ef20 size 0xbc virtual false final false
static inline void SetStaticCharField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID, char16_t  val) ;

/// @brief Method SetStaticDoubleField addr 0x2c7f030 size 0xbc virtual false final false
static inline void SetStaticDoubleField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID, double_t  val) ;

/// @brief Method SetStaticFloatField addr 0x2c7f140 size 0xbc virtual false final false
static inline void SetStaticFloatField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID, float_t  val) ;

/// @brief Method SetStaticLongField addr 0x2c7f250 size 0xbc virtual false final false
static inline void SetStaticLongField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID, int64_t  val) ;

/// @brief Method SetStaticShortField addr 0x2c7f360 size 0xbc virtual false final false
static inline void SetStaticShortField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID, int16_t  val) ;

/// @brief Method SetStaticSByteField addr 0x2c7f470 size 0xbc virtual false final false
static inline void SetStaticSByteField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID, int8_t  val) ;

/// @brief Method SetStaticBooleanField addr 0x2c7f580 size 0xbc virtual false final false
static inline void SetStaticBooleanField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID, bool  val) ;

/// @brief Method SetStaticIntField addr 0x2c7f690 size 0xbc virtual false final false
static inline void SetStaticIntField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID, int32_t  val) ;

/// @brief Method GetStaticObjectField addr 0x2c7f7a0 size 0xa8 virtual false final false
static inline ::cordl_internals::intptr_t GetStaticObjectField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetStaticStringField addr 0x2c7f88c size 0xa8 virtual false final false
static inline ::StringW GetStaticStringField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetStaticCharField addr 0x2c7f978 size 0xa8 virtual false final false
static inline char16_t GetStaticCharField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetStaticDoubleField addr 0x2c7fa64 size 0xb4 virtual false final false
static inline double_t GetStaticDoubleField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetStaticFloatField addr 0x2c7fb5c size 0xb4 virtual false final false
static inline float_t GetStaticFloatField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetStaticLongField addr 0x2c7fc54 size 0xa8 virtual false final false
static inline int64_t GetStaticLongField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetStaticShortField addr 0x2c7fd40 size 0xa8 virtual false final false
static inline int16_t GetStaticShortField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetStaticSByteField addr 0x2c7fe2c size 0xa8 virtual false final false
static inline int8_t GetStaticSByteField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetStaticBooleanField addr 0x2c7ff18 size 0xa8 virtual false final false
static inline bool GetStaticBooleanField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetStaticIntField addr 0x2c80004 size 0xa8 virtual false final false
static inline int32_t GetStaticIntField(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method CallStaticVoidMethod addr 0x2c800f0 size 0xbc virtual false final false
static inline void CallStaticVoidMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticObjectMethod addr 0x2c80200 size 0xb8 virtual false final false
static inline ::cordl_internals::intptr_t CallStaticObjectMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticStringMethod addr 0x2c8030c size 0xb8 virtual false final false
static inline ::StringW CallStaticStringMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticCharMethod addr 0x2c803c4 size 0xb8 virtual false final false
static inline char16_t CallStaticCharMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticDoubleMethod addr 0x2c804d0 size 0xc4 virtual false final false
static inline double_t CallStaticDoubleMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticFloatMethod addr 0x2c805e8 size 0xc4 virtual false final false
static inline float_t CallStaticFloatMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticLongMethod addr 0x2c80700 size 0xb8 virtual false final false
static inline int64_t CallStaticLongMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticShortMethod addr 0x2c8080c size 0xb8 virtual false final false
static inline int16_t CallStaticShortMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticSByteMethod addr 0x2c80918 size 0xb8 virtual false final false
static inline int8_t CallStaticSByteMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticBooleanMethod addr 0x2c80a24 size 0xb8 virtual false final false
static inline bool CallStaticBooleanMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticIntMethod addr 0x2c80b30 size 0xb8 virtual false final false
static inline int32_t CallStaticIntMethod(::cordl_internals::intptr_t  clazz, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method SetObjectField addr 0x2c80c3c size 0xbc virtual false final false
static inline void SetObjectField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID, ::cordl_internals::intptr_t  val) ;

/// @brief Method SetStringField addr 0x2c80d4c size 0xbc virtual false final false
static inline void SetStringField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID, ::StringW  val) ;

/// @brief Method SetCharField addr 0x2c80e5c size 0xbc virtual false final false
static inline void SetCharField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID, char16_t  val) ;

/// @brief Method SetDoubleField addr 0x2c80f6c size 0xbc virtual false final false
static inline void SetDoubleField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID, double_t  val) ;

/// @brief Method SetFloatField addr 0x2c8107c size 0xbc virtual false final false
static inline void SetFloatField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID, float_t  val) ;

/// @brief Method SetLongField addr 0x2c8118c size 0xbc virtual false final false
static inline void SetLongField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID, int64_t  val) ;

/// @brief Method SetShortField addr 0x2c8129c size 0xbc virtual false final false
static inline void SetShortField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID, int16_t  val) ;

/// @brief Method SetSByteField addr 0x2c813ac size 0xbc virtual false final false
static inline void SetSByteField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID, int8_t  val) ;

/// @brief Method SetBooleanField addr 0x2c814bc size 0xbc virtual false final false
static inline void SetBooleanField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID, bool  val) ;

/// @brief Method SetIntField addr 0x2c815cc size 0xbc virtual false final false
static inline void SetIntField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID, int32_t  val) ;

/// @brief Method GetObjectField addr 0x2c816dc size 0xa8 virtual false final false
static inline ::cordl_internals::intptr_t GetObjectField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetStringField addr 0x2c817c8 size 0xa8 virtual false final false
static inline ::StringW GetStringField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetCharField addr 0x2c818b4 size 0xa8 virtual false final false
static inline char16_t GetCharField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetDoubleField addr 0x2c819a0 size 0xb4 virtual false final false
static inline double_t GetDoubleField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetFloatField addr 0x2c81a98 size 0xb4 virtual false final false
static inline float_t GetFloatField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetLongField addr 0x2c81b90 size 0xa8 virtual false final false
static inline int64_t GetLongField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetShortField addr 0x2c81c7c size 0xa8 virtual false final false
static inline int16_t GetShortField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetSByteField addr 0x2c81d68 size 0xa8 virtual false final false
static inline int8_t GetSByteField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetBooleanField addr 0x2c81e54 size 0xa8 virtual false final false
static inline bool GetBooleanField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method GetIntField addr 0x2c81f40 size 0xa8 virtual false final false
static inline int32_t GetIntField(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  fieldID) ;

/// @brief Method CallVoidMethod addr 0x2c8202c size 0xbc virtual false final false
static inline void CallVoidMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallObjectMethod addr 0x2c8213c size 0xb8 virtual false final false
static inline ::cordl_internals::intptr_t CallObjectMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStringMethod addr 0x2c82248 size 0xb8 virtual false final false
static inline ::StringW CallStringMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallCharMethod addr 0x2c82300 size 0xb8 virtual false final false
static inline char16_t CallCharMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallDoubleMethod addr 0x2c8240c size 0xc4 virtual false final false
static inline double_t CallDoubleMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallFloatMethod addr 0x2c82524 size 0xc4 virtual false final false
static inline float_t CallFloatMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallLongMethod addr 0x2c8263c size 0xb8 virtual false final false
static inline int64_t CallLongMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallShortMethod addr 0x2c82748 size 0xb8 virtual false final false
static inline int16_t CallShortMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallSByteMethod addr 0x2c82854 size 0xb8 virtual false final false
static inline int8_t CallSByteMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallBooleanMethod addr 0x2c82960 size 0xb8 virtual false final false
static inline bool CallBooleanMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallIntMethod addr 0x2c82a6c size 0xb8 virtual false final false
static inline int32_t CallIntMethod(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method FromCharArray addr 0x2c82b78 size 0xa0 virtual false final false
static inline ::ArrayW<char16_t,::Array<char16_t>*> FromCharArray(::cordl_internals::intptr_t  array) ;

/// @brief Method FromDoubleArray addr 0x2c82c54 size 0xa0 virtual false final false
static inline ::ArrayW<double_t,::Array<double_t>*> FromDoubleArray(::cordl_internals::intptr_t  array) ;

/// @brief Method FromFloatArray addr 0x2c82d30 size 0xa0 virtual false final false
static inline ::ArrayW<float_t,::Array<float_t>*> FromFloatArray(::cordl_internals::intptr_t  array) ;

/// @brief Method FromLongArray addr 0x2c82e0c size 0xa0 virtual false final false
static inline ::ArrayW<int64_t,::Array<int64_t>*> FromLongArray(::cordl_internals::intptr_t  array) ;

/// @brief Method FromShortArray addr 0x2c82ee8 size 0xa0 virtual false final false
static inline ::ArrayW<int16_t,::Array<int16_t>*> FromShortArray(::cordl_internals::intptr_t  array) ;

/// @brief Method FromByteArray addr 0x2c82fc4 size 0xa0 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromByteArray(::cordl_internals::intptr_t  array) ;

/// @brief Method FromSByteArray addr 0x2c830a0 size 0xa0 virtual false final false
static inline ::ArrayW<int8_t,::Array<int8_t>*> FromSByteArray(::cordl_internals::intptr_t  array) ;

/// @brief Method FromBooleanArray addr 0x2c8317c size 0xa0 virtual false final false
static inline ::ArrayW<bool,::Array<bool>*> FromBooleanArray(::cordl_internals::intptr_t  array) ;

/// @brief Method FromIntArray addr 0x2c83258 size 0xa0 virtual false final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> FromIntArray(::cordl_internals::intptr_t  array) ;

/// @brief Method ToObjectArray addr 0x2c83334 size 0xa8 virtual false final false
static inline ::cordl_internals::intptr_t ToObjectArray(::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>  array, ::cordl_internals::intptr_t  type) ;

/// @brief Method ToCharArray addr 0x2c83420 size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t ToCharArray(::ArrayW<char16_t,::Array<char16_t>*>  array) ;

/// @brief Method ToDoubleArray addr 0x2c834fc size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t ToDoubleArray(::ArrayW<double_t,::Array<double_t>*>  array) ;

/// @brief Method ToFloatArray addr 0x2c835d8 size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t ToFloatArray(::ArrayW<float_t,::Array<float_t>*>  array) ;

/// @brief Method ToLongArray addr 0x2c836b4 size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t ToLongArray(::ArrayW<int64_t,::Array<int64_t>*>  array) ;

/// @brief Method ToShortArray addr 0x2c83790 size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t ToShortArray(::ArrayW<int16_t,::Array<int16_t>*>  array) ;

/// @brief Method ToByteArray addr 0x2c8386c size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t ToByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method ToSByteArray addr 0x2c83948 size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t ToSByteArray(::ArrayW<int8_t,::Array<int8_t>*>  array) ;

/// @brief Method ToBooleanArray addr 0x2c83a24 size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t ToBooleanArray(::ArrayW<bool,::Array<bool>*>  array) ;

/// @brief Method ToIntArray addr 0x2c83b00 size 0xa0 virtual false final false
static inline ::cordl_internals::intptr_t ToIntArray(::ArrayW<int32_t,::Array<int32_t>*>  array) ;

/// @brief Method GetObjectArrayElement addr 0x2c83bdc size 0xa8 virtual false final false
static inline ::cordl_internals::intptr_t GetObjectArrayElement(::cordl_internals::intptr_t  array, int32_t  index) ;

/// @brief Method GetArrayLength addr 0x2c83cc8 size 0xa0 virtual false final false
static inline int32_t GetArrayLength(::cordl_internals::intptr_t  array) ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJNISafe(AndroidJNISafe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJNISafe(AndroidJNISafe const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidJNISafe()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNISafe, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNISafe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNISafe*, "UnityEngine", "AndroidJNISafe");
