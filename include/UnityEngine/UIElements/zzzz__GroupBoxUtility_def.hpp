#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GroupBoxUtility)
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class IGroupManager;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GroupBoxUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GroupBoxUtility);
// Type: UnityEngine.UIElements::GroupBoxUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6918))
// CS Name: ::UnityEngine.UIElements::GroupBoxUtility*
class CORDL_TYPE GroupBoxUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_GroupManagers(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*,::UnityEngine::UIElements::IGroupManager*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBox*,::UnityEngine::UIElements::IGroupManager*>* getStaticF_s_GroupManagers() ;

static inline void setStaticF_s_GroupOptionManagerCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*,::UnityEngine::UIElements::IGroupManager*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IGroupBoxOption*,::UnityEngine::UIElements::IGroupManager*>* getStaticF_s_GroupOptionManagerCache() ;

static inline void setStaticF_k_GenericGroupBoxType(::System::Type*  value) ;

static inline ::System::Type* getStaticF_k_GenericGroupBoxType() ;

/// @brief Method RegisterGroupBoxOptionCallbacks addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void RegisterGroupBoxOptionCallbacks(T  option) ;

/// @brief Method OnOptionSelected addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void OnOptionSelected(T  selectedOption) ;

/// @brief Method OnOptionAttachToPanel addr 0x2e03be0 size 0x24c virtual false final false
static inline void OnOptionAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  evt) ;

/// @brief Method OnOptionDetachFromPanel addr 0x2e0420c size 0x1b4 virtual false final false
static inline void OnOptionDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent*  evt) ;

/// @brief Method FindOrCreateGroupManager addr 0x2e03e2c size 0x3e0 virtual false final false
static inline ::UnityEngine::UIElements::IGroupManager* FindOrCreateGroupManager(::UnityEngine::UIElements::IGroupBox*  groupBox) ;

/// @brief Method OnGroupBoxDetachedFromPanel addr 0x2e043c0 size 0xb4 virtual false final false
static inline void OnGroupBoxDetachedFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent*  evt) ;

/// @brief Method OnPanelDestroyed addr 0x2e04474 size 0xdc virtual false final false
static inline void OnPanelDestroyed(::UnityEngine::UIElements::BaseVisualElementPanel*  panel) ;

// Ctor Parameters [CppParam { name: "", ty: "GroupBoxUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupBoxUtility(GroupBoxUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupBoxUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupBoxUtility(GroupBoxUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GroupBoxUtility()  = default;
public:


// Fields

// Static field s_GroupManagers

// Static field s_GroupOptionManagerCache

// Static field k_GenericGroupBoxType


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GroupBoxUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GroupBoxUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GroupBoxUtility*, "UnityEngine.UIElements", "GroupBoxUtility");
