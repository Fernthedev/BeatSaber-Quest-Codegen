#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJavaProxy)
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class GlobalJavaObjectRef;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaProxy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaProxy);
// Type: UnityEngine::AndroidJavaProxy
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14912))
// CS Name: ::UnityEngine::AndroidJavaProxy*
class CORDL_TYPE AndroidJavaProxy : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field javaInterface offset 0x10
 __declspec(property(get=__get_javaInterface, put=__set_javaInterface)) ::UnityEngine::AndroidJavaClass*  javaInterface;

/// @brief Field proxyObject offset 0x18
 __declspec(property(get=__get_proxyObject, put=__set_proxyObject)) ::cordl_internals::intptr_t  proxyObject;

constexpr void __set_javaInterface(::UnityEngine::AndroidJavaClass*  value) ;

constexpr ::UnityEngine::AndroidJavaClass* __get_javaInterface() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AndroidJavaClass*> __get_javaInterface() const;

constexpr void __set_proxyObject(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_proxyObject() ;

constexpr ::cordl_internals::intptr_t const& __get_proxyObject() const;

static inline void setStaticF_s_JavaLangSystemClass(::UnityEngine::GlobalJavaObjectRef*  value) ;

static inline ::UnityEngine::GlobalJavaObjectRef* getStaticF_s_JavaLangSystemClass() ;

static inline void setStaticF_s_HashCodeMethodID(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_s_HashCodeMethodID() ;

static inline ::UnityEngine::AndroidJavaProxy* New_ctor(::StringW  javaInterface) ;

/// @brief Method .ctor addr 0x2c84130 size 0x7c virtual false final false
inline void _ctor(::StringW  javaInterface) ;

static inline ::UnityEngine::AndroidJavaProxy* New_ctor(::UnityEngine::AndroidJavaClass*  javaInterface) ;

/// @brief Method .ctor addr 0x2c841fc size 0x6c virtual false final false
inline void _ctor(::UnityEngine::AndroidJavaClass*  javaInterface) ;

/// @brief Method Finalize addr 0x2c84268 size 0x98 virtual true final false
inline void Finalize() ;

/// @brief Method Invoke addr 0x2c84300 size 0x728 virtual true final false
inline ::UnityEngine::AndroidJavaObject* Invoke(::StringW  methodName, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x2c855d0 size 0x164 virtual true final false
inline ::UnityEngine::AndroidJavaObject* Invoke(::StringW  methodName, ::ArrayW<::UnityEngine::AndroidJavaObject*,::Array<::UnityEngine::AndroidJavaObject*>*>  javaArgs) ;

/// @brief Method equals addr 0x2c86098 size 0xb8 virtual true final false
inline bool equals(::UnityEngine::AndroidJavaObject*  obj) ;

/// @brief Method hashCode addr 0x2c861f0 size 0xb0 virtual true final false
inline int32_t hashCode() ;

/// @brief Method toString addr 0x2c862a0 size 0x64 virtual true final false
inline ::StringW toString() ;

/// @brief Method GetProxyObject addr 0x2c86304 size 0x10 virtual false final false
inline ::UnityEngine::AndroidJavaObject* GetProxyObject() ;

/// @brief Method GetRawProxy addr 0x2c85380 size 0x144 virtual false final false
inline ::cordl_internals::intptr_t GetRawProxy() ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJavaProxy(AndroidJavaProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJavaProxy(AndroidJavaProxy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidJavaProxy()  = default;
public:


// Fields

// Static field s_JavaLangSystemClass

// Static field s_HashCodeMethodID


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaProxy, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaProxy*, "UnityEngine", "AndroidJavaProxy");
