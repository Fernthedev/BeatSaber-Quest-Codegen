#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CuttingManager)
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class NoteCutter;
}
// Forward declare root types
namespace GlobalNamespace {
class CuttingManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CuttingManager);
// Type: ::CuttingManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5287))
// CS Name: ::CuttingManager*
class CORDL_TYPE CuttingManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _saberManager offset 0x18
 __declspec(property(get=__get__saberManager, put=__set__saberManager)) ::GlobalNamespace::SaberManager*  _saberManager;

/// @brief Field _noteCutter offset 0x20
 __declspec(property(get=__get__noteCutter, put=__set__noteCutter)) ::GlobalNamespace::NoteCutter*  _noteCutter;

constexpr void __set__saberManager(::GlobalNamespace::SaberManager*  value) ;

constexpr ::GlobalNamespace::SaberManager* __get__saberManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> __get__saberManager() const;

constexpr void __set__noteCutter(::GlobalNamespace::NoteCutter*  value) ;

constexpr ::GlobalNamespace::NoteCutter* __get__noteCutter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutter*> __get__noteCutter() const;

/// @brief Method OnEnable addr 0x22627a8 size 0x88 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x22628e0 size 0x88 virtual false final false
inline void OnDisable() ;

/// @brief Method HandleSaberManagerDidUpdateSaberPositions addr 0x2262a18 size 0x44 virtual false final false
inline void HandleSaberManagerDidUpdateSaberPositions(::GlobalNamespace::Saber*  leftSaber, ::GlobalNamespace::Saber*  rightSaber) ;

static inline ::GlobalNamespace::CuttingManager* New_ctor() ;

/// @brief Method .ctor addr 0x2262f80 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CuttingManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CuttingManager(CuttingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CuttingManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CuttingManager(CuttingManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CuttingManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CuttingManager, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CuttingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CuttingManager*, "", "CuttingManager");
