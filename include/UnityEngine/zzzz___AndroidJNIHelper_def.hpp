#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(_AndroidJNIHelper)
namespace UnityEngine {
class AndroidJavaObject;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
namespace UnityEngine {
struct jvalue;
}
namespace System {
class Array;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
// Forward declare root types
namespace UnityEngine {
class _AndroidJNIHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::_AndroidJNIHelper);
// Type: UnityEngine::_AndroidJNIHelper
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14916))
// CS Name: ::UnityEngine::_AndroidJNIHelper*
class CORDL_TYPE _AndroidJNIHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CreateJavaProxy addr 0x2c88464 size 0x78 virtual false final false
static inline ::cordl_internals::intptr_t CreateJavaProxy(::cordl_internals::intptr_t  delegateHandle, ::UnityEngine::AndroidJavaProxy*  proxy) ;

/// @brief Method CreateJavaRunnable addr 0x2c884dc size 0x60 virtual false final false
static inline ::cordl_internals::intptr_t CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable*  jrunnable) ;

/// @brief Method InvokeJavaProxyMethod addr 0x2c8853c size 0x498 virtual false final false
static inline ::cordl_internals::intptr_t InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy*  proxy, ::cordl_internals::intptr_t  jmethodName, ::cordl_internals::intptr_t  jargs) ;

/// @brief Method CreateJNIArgArray addr 0x2c889d4 size 0x60c virtual false final false
static inline ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*> CreateJNIArgArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method UnboxArray addr 0x2c89998 size 0x698 virtual false final false
static inline ::System::Object* UnboxArray(::UnityEngine::AndroidJavaObject*  obj) ;

/// @brief Method Unbox addr 0x2c85734 size 0x8f8 virtual false final false
static inline ::System::Object* Unbox(::UnityEngine::AndroidJavaObject*  obj) ;

/// @brief Method Box addr 0x2c84a28 size 0x958 virtual false final false
static inline ::UnityEngine::AndroidJavaObject* Box(::System::Object*  obj) ;

/// @brief Method DeleteJNIArgArray addr 0x2c8a030 size 0x160 virtual false final false
static inline void DeleteJNIArgArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  jniArgs) ;

/// @brief Method ConvertToJNIArray addr 0x2c88fe0 size 0x9b4 virtual false final false
static inline ::cordl_internals::intptr_t ConvertToJNIArray(::System::Array*  array) ;

/// @brief Method ConvertFromJNIArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ArrayType>
static inline ArrayType ConvertFromJNIArray(::cordl_internals::intptr_t  array) ;

/// @brief Method GetConstructorID addr 0x2c8a238 size 0x20 virtual false final false
static inline ::cordl_internals::intptr_t GetConstructorID(::cordl_internals::intptr_t  jclass, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method GetMethodID addr 0x2c8a350 size 0x38 virtual false final false
static inline ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t  jclass, ::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, bool  isStatic) ;

/// @brief Method GetMethodID addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static inline ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t  jclass, ::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, bool  isStatic) ;

/// @brief Method GetFieldID addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static inline ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t  jclass, ::StringW  fieldName, bool  isStatic) ;

/// @brief Method GetConstructorID addr 0x2c8a388 size 0x200 virtual false final false
static inline ::cordl_internals::intptr_t GetConstructorID(::cordl_internals::intptr_t  jclass, ::StringW  signature) ;

/// @brief Method GetMethodID addr 0x2c8a588 size 0x210 virtual false final false
static inline ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t  jclass, ::StringW  methodName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetMethodIDFallback addr 0x2c8a798 size 0xfc virtual false final false
static inline ::cordl_internals::intptr_t GetMethodIDFallback(::cordl_internals::intptr_t  jclass, ::StringW  methodName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetFieldID addr 0x2c8a894 size 0x318 virtual false final false
static inline ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t  jclass, ::StringW  fieldName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetSignature addr 0x2c8abe8 size 0xe74 virtual false final false
static inline ::StringW GetSignature(::System::Object*  obj) ;

/// @brief Method GetSignature addr 0x2c8a258 size 0xf4 virtual false final false
static inline ::StringW GetSignature(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method GetSignature addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static inline ::StringW GetSignature(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

static inline ::UnityEngine::_AndroidJNIHelper* New_ctor() ;

/// @brief Method .ctor addr 0x2c8ba5c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "_AndroidJNIHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
_AndroidJNIHelper(_AndroidJNIHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "_AndroidJNIHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
_AndroidJNIHelper(_AndroidJNIHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 _AndroidJNIHelper()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::_AndroidJNIHelper, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::_AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::_AndroidJNIHelper*, "UnityEngine", "_AndroidJNIHelper");
