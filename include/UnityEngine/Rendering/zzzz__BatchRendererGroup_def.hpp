#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BatchRendererGroup)
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine::Rendering {
class __BatchRendererGroup__OnPerformCulling;
}
namespace UnityEngine::Rendering {
struct BatchRendererCullingOutput;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine::Rendering {
class __BatchRendererGroup__OnPerformCulling;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::BatchRendererGroup);
MARK_REF_PTR_T(::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling);
// Type: ::OnPerformCulling
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10367))
// CS Name: ::BatchRendererGroup::OnPerformCulling*
class CORDL_TYPE __BatchRendererGroup__OnPerformCulling : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2ceef10 size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2cef040 size 0x5c virtual true final false
inline ::Unity::Jobs::JobHandle Invoke(::UnityEngine::Rendering::BatchRendererGroup*  rendererGroup, ::UnityEngine::Rendering::BatchCullingContext  cullingContext) ;

// Ctor Parameters [CppParam { name: "", ty: "__BatchRendererGroup__OnPerformCulling", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BatchRendererGroup__OnPerformCulling(__BatchRendererGroup__OnPerformCulling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BatchRendererGroup__OnPerformCulling", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BatchRendererGroup__OnPerformCulling(__BatchRendererGroup__OnPerformCulling const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BatchRendererGroup__OnPerformCulling()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Type: UnityEngine.Rendering::BatchRendererGroup
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10368))
// CS Name: ::UnityEngine.Rendering::BatchRendererGroup*
class CORDL_TYPE BatchRendererGroup : public ::System::Object {
public:
// Declarations
using OnPerformCulling = ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_GroupHandle offset 0x10
 __declspec(property(get=__get_m_GroupHandle, put=__set_m_GroupHandle)) ::cordl_internals::intptr_t  m_GroupHandle;

/// @brief Field m_PerformCulling offset 0x18
 __declspec(property(get=__get_m_PerformCulling, put=__set_m_PerformCulling)) ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*  m_PerformCulling;

constexpr void __set_m_GroupHandle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_GroupHandle() ;

constexpr ::cordl_internals::intptr_t const& __get_m_GroupHandle() const;

constexpr void __set_m_PerformCulling(::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*  value) ;

constexpr ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling* __get_m_PerformCulling() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*> __get_m_PerformCulling() const;

/// @brief Method InvokeOnPerformCulling addr 0x2ceecf0 size 0x220 virtual false final false
static inline void InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup*  group, ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>  context, ByRef<::UnityEngine::Rendering::LODParameters>  lodParameters) ;

// Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BatchRendererGroup(BatchRendererGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatchRendererGroup(BatchRendererGroup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BatchRendererGroup()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererGroup, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::BatchRendererGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroup*, "UnityEngine.Rendering", "BatchRendererGroup");
NEED_NO_BOX(::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*, "UnityEngine.Rendering", "BatchRendererGroup/OnPerformCulling");
