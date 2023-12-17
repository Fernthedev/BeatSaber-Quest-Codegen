#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CullingGroup)
namespace UnityEngine {
class __CullingGroup__StateChanged;
}
namespace UnityEngine {
struct CullingGroupEvent;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class CullingGroup;
}
namespace UnityEngine {
class __CullingGroup__StateChanged;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CullingGroup);
MARK_REF_PTR_T(::UnityEngine::__CullingGroup__StateChanged);
// Type: ::StateChanged
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10147))
// CS Name: ::CullingGroup::StateChanged*
class CORDL_TYPE __CullingGroup__StateChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::__CullingGroup__StateChanged* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2cc67f0 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2cc68b4 size 0x14 virtual true final false
inline void Invoke(::UnityEngine::CullingGroupEvent  sphere) ;

// Ctor Parameters [CppParam { name: "", ty: "__CullingGroup__StateChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CullingGroup__StateChanged(__CullingGroup__StateChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CullingGroup__StateChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CullingGroup__StateChanged(__CullingGroup__StateChanged const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CullingGroup__StateChanged()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__CullingGroup__StateChanged, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::CullingGroup
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10148))
// CS Name: ::UnityEngine::CullingGroup*
class CORDL_TYPE CullingGroup : public ::System::Object {
public:
// Declarations
using StateChanged = ::UnityEngine::__CullingGroup__StateChanged;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

/// @brief Field m_OnStateChanged offset 0x18
 __declspec(property(get=__get_m_OnStateChanged, put=__set_m_OnStateChanged)) ::UnityEngine::__CullingGroup__StateChanged*  m_OnStateChanged;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

constexpr void __set_m_OnStateChanged(::UnityEngine::__CullingGroup__StateChanged*  value) ;

constexpr ::UnityEngine::__CullingGroup__StateChanged* __get_m_OnStateChanged() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__CullingGroup__StateChanged*> __get_m_OnStateChanged() const;

/// @brief Method SendEvents addr 0x2cc6794 size 0x5c virtual false final false
static inline void SendEvents(::UnityEngine::CullingGroup*  cullingGroup, ::cordl_internals::intptr_t  eventsPtr, int32_t  count) ;

// Ctor Parameters [CppParam { name: "", ty: "CullingGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingGroup(CullingGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingGroup(CullingGroup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CullingGroup()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CullingGroup, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::CullingGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingGroup*, "UnityEngine", "CullingGroup");
NEED_NO_BOX(::UnityEngine::__CullingGroup__StateChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__CullingGroup__StateChanged*, "UnityEngine", "CullingGroup/StateChanged");
