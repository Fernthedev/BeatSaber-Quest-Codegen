#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeactivateOnInputFocusCapture)
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateOnInputFocusCapture;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeactivateOnInputFocusCapture);
// Type: ::DeactivateOnInputFocusCapture
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14332))
// CS Name: ::DeactivateOnInputFocusCapture*
class CORDL_TYPE DeactivateOnInputFocusCapture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _vrPlatformHelper offset 0x18
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

 __declspec(property(get=get_loggerPrefix)) ::StringW  loggerPrefix;

/// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
constexpr operator  ::GlobalNamespace::IVerboseLogger*() noexcept;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

/// @brief Method get_loggerPrefix addr 0x20eec00 size 0x40 virtual true final true
inline ::StringW get_loggerPrefix() ;

/// @brief Method Init addr 0x20eec40 size 0x8 virtual false final false
inline void Init(::GlobalNamespace::IVRPlatformHelper*  vrPlatformHelper) ;

/// @brief Method OnEnable addr 0x20eee60 size 0x4 virtual false final false
inline void OnEnable() ;

/// @brief Method Setup addr 0x20eec48 size 0x218 virtual false final false
inline void Setup() ;

/// @brief Method OnDestroy addr 0x20ef008 size 0x1a4 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleInputFocusCaptured addr 0x20ef1ac size 0x148 virtual false final false
inline void HandleInputFocusCaptured() ;

/// @brief Method HandleInputFocusReleased addr 0x20ef2f4 size 0x148 virtual false final false
inline void HandleInputFocusReleased() ;

/// @brief Method ActivateGameObject addr 0x20ef43c size 0x1a0 virtual false final false
inline void ActivateGameObject() ;

/// @brief Method DeactivateGameObject addr 0x20eee64 size 0x1a4 virtual false final false
inline void DeactivateGameObject() ;

static inline ::GlobalNamespace::DeactivateOnInputFocusCapture* New_ctor() ;

/// @brief Method .ctor addr 0x20ef5dc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DeactivateOnInputFocusCapture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeactivateOnInputFocusCapture(DeactivateOnInputFocusCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeactivateOnInputFocusCapture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeactivateOnInputFocusCapture(DeactivateOnInputFocusCapture const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DeactivateOnInputFocusCapture()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeactivateOnInputFocusCapture, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeactivateOnInputFocusCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateOnInputFocusCapture*, "", "DeactivateOnInputFocusCapture");
