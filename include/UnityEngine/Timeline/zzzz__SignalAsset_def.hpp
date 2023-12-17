#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(SignalAsset)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::SignalAsset);
// Type: UnityEngine.Timeline::SignalAsset
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13892))
// CS Name: ::UnityEngine.Timeline::SignalAsset*
class CORDL_TYPE SignalAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::ScriptableObject)]{};

static inline void setStaticF_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*  value) ;

static inline ::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* getStaticF_OnEnableCallback() ;

/// @brief Method add_OnEnableCallback addr 0x2c68d84 size 0xcc virtual false final false
static inline void add_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*  value) ;

/// @brief Method remove_OnEnableCallback addr 0x2c68e50 size 0xcc virtual false final false
static inline void remove_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*  value) ;

/// @brief Method OnEnable addr 0x2c68f1c size 0x6c virtual false final false
inline void OnEnable() ;

static inline ::UnityEngine::Timeline::SignalAsset* New_ctor() ;

/// @brief Method .ctor addr 0x2c68f88 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SignalAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalAsset(SignalAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalAsset(SignalAsset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalAsset()  = default;
public:


// Fields

// Static field OnEnableCallback


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SignalAsset, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::SignalAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalAsset*, "UnityEngine.Timeline", "SignalAsset");
