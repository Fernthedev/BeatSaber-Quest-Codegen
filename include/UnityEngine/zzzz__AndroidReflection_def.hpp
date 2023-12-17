#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidReflection)
namespace System {
class Type;
}
namespace System {
class Exception;
}
namespace UnityEngine {
class GlobalJavaObjectRef;
}
// Forward declare root types
namespace UnityEngine {
class AndroidReflection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidReflection);
// Type: UnityEngine::AndroidReflection
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14915))
// CS Name: ::UnityEngine::AndroidReflection*
class CORDL_TYPE AndroidReflection : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_ReflectionHelperClass(::UnityEngine::GlobalJavaObjectRef*  value) ;

static inline ::UnityEngine::GlobalJavaObjectRef* getStaticF_s_ReflectionHelperClass() ;

static inline void setStaticF_s_ReflectionHelperGetConstructorID(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_s_ReflectionHelperGetConstructorID() ;

static inline void setStaticF_s_ReflectionHelperGetMethodID(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_s_ReflectionHelperGetMethodID() ;

static inline void setStaticF_s_ReflectionHelperGetFieldID(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_s_ReflectionHelperGetFieldID() ;

static inline void setStaticF_s_ReflectionHelperGetFieldSignature(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_s_ReflectionHelperGetFieldSignature() ;

static inline void setStaticF_s_ReflectionHelperNewProxyInstance(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_s_ReflectionHelperNewProxyInstance() ;

static inline void setStaticF_s_ReflectionHelperSetNativeExceptionOnProxy(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_s_ReflectionHelperSetNativeExceptionOnProxy() ;

static inline void setStaticF_s_FieldGetDeclaringClass(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_s_FieldGetDeclaringClass() ;

/// @brief Method IsPrimitive addr 0x2c878e4 size 0x14 virtual false final false
static inline bool IsPrimitive(::System::Type*  t) ;

/// @brief Method IsAssignableFrom addr 0x2c878f8 size 0x20 virtual false final false
static inline bool IsAssignableFrom(::System::Type*  t, ::System::Type*  from) ;

/// @brief Method GetStaticMethodID addr 0x2c87918 size 0x9c virtual false final false
static inline ::cordl_internals::intptr_t GetStaticMethodID(::StringW  clazz, ::StringW  methodName, ::StringW  signature) ;

/// @brief Method GetMethodID addr 0x2c879b4 size 0x9c virtual false final false
static inline ::cordl_internals::intptr_t GetMethodID(::StringW  clazz, ::StringW  methodName, ::StringW  signature) ;

/// @brief Method GetConstructorMember addr 0x2c87a50 size 0x18c virtual false final false
static inline ::cordl_internals::intptr_t GetConstructorMember(::cordl_internals::intptr_t  jclass, ::StringW  signature) ;

/// @brief Method GetMethodMember addr 0x2c87bdc size 0x200 virtual false final false
static inline ::cordl_internals::intptr_t GetMethodMember(::cordl_internals::intptr_t  jclass, ::StringW  methodName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetFieldMember addr 0x2c87ddc size 0x200 virtual false final false
static inline ::cordl_internals::intptr_t GetFieldMember(::cordl_internals::intptr_t  jclass, ::StringW  fieldName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetFieldClass addr 0x2c87fdc size 0x64 virtual false final false
static inline ::cordl_internals::intptr_t GetFieldClass(::cordl_internals::intptr_t  field) ;

/// @brief Method GetFieldSignature addr 0x2c88040 size 0xa8 virtual false final false
static inline ::StringW GetFieldSignature(::cordl_internals::intptr_t  field) ;

/// @brief Method NewProxyInstance addr 0x2c880e8 size 0xd0 virtual false final false
static inline ::cordl_internals::intptr_t NewProxyInstance(::cordl_internals::intptr_t  delegateHandle, ::cordl_internals::intptr_t  interfaze) ;

/// @brief Method SetNativeExceptionOnProxy addr 0x2c854c4 size 0x10c virtual false final false
static inline void SetNativeExceptionOnProxy(::cordl_internals::intptr_t  proxy, ::System::Exception*  e, bool  methodNotFound) ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidReflection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidReflection(AndroidReflection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidReflection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidReflection(AndroidReflection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidReflection()  = default;
public:


// Fields

// Static field s_ReflectionHelperClass

// Static field s_ReflectionHelperGetConstructorID

// Static field s_ReflectionHelperGetMethodID

// Static field s_ReflectionHelperGetFieldID

// Static field s_ReflectionHelperGetFieldSignature

// Static field s_ReflectionHelperNewProxyInstance

// Static field s_ReflectionHelperSetNativeExceptionOnProxy

// Static field s_FieldGetDeclaringClass


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidReflection, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidReflection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidReflection*, "UnityEngine", "AndroidReflection");
