#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RaycasterManager)
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class RaycasterManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::RaycasterManager);
// Type: UnityEngine.EventSystems::RaycasterManager
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13208))
// CS Name: ::UnityEngine.EventSystems::RaycasterManager*
class CORDL_TYPE RaycasterManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Raycasters(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* getStaticF_s_Raycasters() ;

/// @brief Method AddRaycaster addr 0x2d9fdc4 size 0x114 virtual false final false
static inline void AddRaycaster(::UnityEngine::EventSystems::BaseRaycaster*  baseRaycaster) ;

/// @brief Method GetRaycasters addr 0x2d9fed8 size 0x58 virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* GetRaycasters() ;

/// @brief Method RemoveRaycasters addr 0x2d9ff30 size 0xd0 virtual false final false
static inline void RemoveRaycasters(::UnityEngine::EventSystems::BaseRaycaster*  baseRaycaster) ;

// Ctor Parameters [CppParam { name: "", ty: "RaycasterManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RaycasterManager(RaycasterManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaycasterManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaycasterManager(RaycasterManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RaycasterManager()  = default;
public:


// Fields

// Static field s_Raycasters


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::RaycasterManager, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::RaycasterManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::RaycasterManager*, "UnityEngine.EventSystems", "RaycasterManager");
