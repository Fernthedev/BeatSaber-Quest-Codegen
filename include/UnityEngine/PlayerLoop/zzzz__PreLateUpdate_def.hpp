#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PreLateUpdate)
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UIElementsUpdatePanels;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ParticleSystemBeginUpdateAll;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ScriptRunBehaviourLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__Physics2DLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorUpdateAnimationEnd;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorDeferredEvaluate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorUpdateAnimationBegin;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UpdateNetworkManager;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UNetUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__AIUpdatePostScript;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__EndGraphicsJobsAfterScriptUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ConstraintManagerUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UpdateMasterServerInterface;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__LegacyAnimationUpdate;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PreLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__AIUpdatePostScript;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ConstraintManagerUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorDeferredEvaluate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorUpdateAnimationBegin;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__DirectorUpdateAnimationEnd;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__EndGraphicsJobsAfterScriptUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__LegacyAnimationUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ParticleSystemBeginUpdateAll;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__Physics2DLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__ScriptRunBehaviourLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UIElementsUpdatePanels;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UNetUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UpdateMasterServerInterface;
}
namespace UnityEngine::PlayerLoop {
struct __PreLateUpdate__UpdateNetworkManager;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::PreLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__AIUpdatePostScript);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__ConstraintManagerUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorDeferredEvaluate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationBegin);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationEnd);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__LegacyAnimationUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__ParticleSystemBeginUpdateAll);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__Physics2DLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__ScriptRunBehaviourLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__UIElementsUpdatePanels);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__UNetUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateMasterServerInterface);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateNetworkManager);
// Type: ::Physics2DLateUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10546))
// CS Name: ::PreLateUpdate::Physics2DLateUpdate
struct CORDL_TYPE __PreLateUpdate__Physics2DLateUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__Physics2DLateUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__Physics2DLateUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__Physics2DLateUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::AIUpdatePostScript
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10547))
// CS Name: ::PreLateUpdate::AIUpdatePostScript
struct CORDL_TYPE __PreLateUpdate__AIUpdatePostScript : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__AIUpdatePostScript(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__AIUpdatePostScript()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__AIUpdatePostScript, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorUpdateAnimationBegin
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10548))
// CS Name: ::PreLateUpdate::DirectorUpdateAnimationBegin
struct CORDL_TYPE __PreLateUpdate__DirectorUpdateAnimationBegin : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__DirectorUpdateAnimationBegin(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__DirectorUpdateAnimationBegin()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationBegin, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::LegacyAnimationUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10549))
// CS Name: ::PreLateUpdate::LegacyAnimationUpdate
struct CORDL_TYPE __PreLateUpdate__LegacyAnimationUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__LegacyAnimationUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__LegacyAnimationUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__LegacyAnimationUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorUpdateAnimationEnd
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10550))
// CS Name: ::PreLateUpdate::DirectorUpdateAnimationEnd
struct CORDL_TYPE __PreLateUpdate__DirectorUpdateAnimationEnd : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__DirectorUpdateAnimationEnd(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__DirectorUpdateAnimationEnd()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationEnd, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorDeferredEvaluate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10551))
// CS Name: ::PreLateUpdate::DirectorDeferredEvaluate
struct CORDL_TYPE __PreLateUpdate__DirectorDeferredEvaluate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__DirectorDeferredEvaluate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__DirectorDeferredEvaluate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorDeferredEvaluate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UIElementsUpdatePanels
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10552))
// CS Name: ::PreLateUpdate::UIElementsUpdatePanels
struct CORDL_TYPE __PreLateUpdate__UIElementsUpdatePanels : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__UIElementsUpdatePanels(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__UIElementsUpdatePanels()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__UIElementsUpdatePanels, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateNetworkManager
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10553))
// CS Name: ::PreLateUpdate::UpdateNetworkManager
struct CORDL_TYPE __PreLateUpdate__UpdateNetworkManager : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__UpdateNetworkManager(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__UpdateNetworkManager()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateNetworkManager, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateMasterServerInterface
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10554))
// CS Name: ::PreLateUpdate::UpdateMasterServerInterface
struct CORDL_TYPE __PreLateUpdate__UpdateMasterServerInterface : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__UpdateMasterServerInterface(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__UpdateMasterServerInterface()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateMasterServerInterface, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UNetUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10555))
// CS Name: ::PreLateUpdate::UNetUpdate
struct CORDL_TYPE __PreLateUpdate__UNetUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__UNetUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__UNetUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__UNetUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::EndGraphicsJobsAfterScriptUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10556))
// CS Name: ::PreLateUpdate::EndGraphicsJobsAfterScriptUpdate
struct CORDL_TYPE __PreLateUpdate__EndGraphicsJobsAfterScriptUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__EndGraphicsJobsAfterScriptUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__EndGraphicsJobsAfterScriptUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ParticleSystemBeginUpdateAll
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10557))
// CS Name: ::PreLateUpdate::ParticleSystemBeginUpdateAll
struct CORDL_TYPE __PreLateUpdate__ParticleSystemBeginUpdateAll : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__ParticleSystemBeginUpdateAll(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__ParticleSystemBeginUpdateAll()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__ParticleSystemBeginUpdateAll, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunBehaviourLateUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10558))
// CS Name: ::PreLateUpdate::ScriptRunBehaviourLateUpdate
struct CORDL_TYPE __PreLateUpdate__ScriptRunBehaviourLateUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__ScriptRunBehaviourLateUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__ScriptRunBehaviourLateUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__ScriptRunBehaviourLateUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ConstraintManagerUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10559))
// CS Name: ::PreLateUpdate::ConstraintManagerUpdate
struct CORDL_TYPE __PreLateUpdate__ConstraintManagerUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreLateUpdate__ConstraintManagerUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreLateUpdate__ConstraintManagerUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreLateUpdate__ConstraintManagerUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::PreLateUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10560))
// CS Name: ::UnityEngine.PlayerLoop::PreLateUpdate
struct CORDL_TYPE PreLateUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ConstraintManagerUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__ConstraintManagerUpdate;

using ScriptRunBehaviourLateUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__ScriptRunBehaviourLateUpdate;

using ParticleSystemBeginUpdateAll = ::UnityEngine::PlayerLoop::__PreLateUpdate__ParticleSystemBeginUpdateAll;

using EndGraphicsJobsAfterScriptUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate;

using UNetUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__UNetUpdate;

using UpdateMasterServerInterface = ::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateMasterServerInterface;

using UpdateNetworkManager = ::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateNetworkManager;

using UIElementsUpdatePanels = ::UnityEngine::PlayerLoop::__PreLateUpdate__UIElementsUpdatePanels;

using DirectorDeferredEvaluate = ::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorDeferredEvaluate;

using DirectorUpdateAnimationEnd = ::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationEnd;

using LegacyAnimationUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__LegacyAnimationUpdate;

using DirectorUpdateAnimationBegin = ::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationBegin;

using AIUpdatePostScript = ::UnityEngine::PlayerLoop::__PreLateUpdate__AIUpdatePostScript;

using Physics2DLateUpdate = ::UnityEngine::PlayerLoop::__PreLateUpdate__Physics2DLateUpdate;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PreLateUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PreLateUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PreLateUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PreLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__AIUpdatePostScript, "UnityEngine.PlayerLoop", "PreLateUpdate/AIUpdatePostScript");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__ConstraintManagerUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/ConstraintManagerUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorDeferredEvaluate, "UnityEngine.PlayerLoop", "PreLateUpdate/DirectorDeferredEvaluate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationBegin, "UnityEngine.PlayerLoop", "PreLateUpdate/DirectorUpdateAnimationBegin");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__DirectorUpdateAnimationEnd, "UnityEngine.PlayerLoop", "PreLateUpdate/DirectorUpdateAnimationEnd");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__EndGraphicsJobsAfterScriptUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/EndGraphicsJobsAfterScriptUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__LegacyAnimationUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/LegacyAnimationUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__ParticleSystemBeginUpdateAll, "UnityEngine.PlayerLoop", "PreLateUpdate/ParticleSystemBeginUpdateAll");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__Physics2DLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/Physics2DLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__ScriptRunBehaviourLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/ScriptRunBehaviourLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__UIElementsUpdatePanels, "UnityEngine.PlayerLoop", "PreLateUpdate/UIElementsUpdatePanels");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__UNetUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate/UNetUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateMasterServerInterface, "UnityEngine.PlayerLoop", "PreLateUpdate/UpdateMasterServerInterface");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreLateUpdate__UpdateNetworkManager, "UnityEngine.PlayerLoop", "PreLateUpdate/UpdateNetworkManager");
