#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalJavaObjectRef)
// Forward declare root types
namespace UnityEngine {
class GlobalJavaObjectRef;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GlobalJavaObjectRef);
// Type: UnityEngine::GlobalJavaObjectRef
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14910))
// CS Name: ::UnityEngine::GlobalJavaObjectRef*
class CORDL_TYPE GlobalJavaObjectRef : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_disposed offset 0x10
 __declspec(property(get=__get_m_disposed, put=__set_m_disposed)) bool  m_disposed;

/// @brief Field m_jobject offset 0x18
 __declspec(property(get=__get_m_jobject, put=__set_m_jobject)) ::cordl_internals::intptr_t  m_jobject;

constexpr void __set_m_disposed(bool  value) ;

constexpr bool& __get_m_disposed() ;

constexpr bool const& __get_m_disposed() const;

constexpr void __set_m_jobject(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_jobject() ;

constexpr ::cordl_internals::intptr_t const& __get_m_jobject() const;

static inline ::UnityEngine::GlobalJavaObjectRef* New_ctor(::cordl_internals::intptr_t  jobject) ;

/// @brief Method .ctor addr 0x2c83e98 size 0xb4 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  jobject) ;

/// @brief Method Finalize addr 0x2c83f88 size 0x94 virtual true final false
inline void Finalize() ;

/// @brief Method op_Implicit addr 0x2c84098 size 0x18 virtual false final false
static inline ::cordl_internals::intptr_t op_Implicit___cordl_internals__intptr_t(::UnityEngine::GlobalJavaObjectRef*  obj) ;

/// @brief Method Dispose addr 0x2c8401c size 0x7c virtual false final false
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "GlobalJavaObjectRef", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalJavaObjectRef(GlobalJavaObjectRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalJavaObjectRef", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalJavaObjectRef(GlobalJavaObjectRef const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GlobalJavaObjectRef()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GlobalJavaObjectRef, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::GlobalJavaObjectRef);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GlobalJavaObjectRef*, "UnityEngine", "GlobalJavaObjectRef");
