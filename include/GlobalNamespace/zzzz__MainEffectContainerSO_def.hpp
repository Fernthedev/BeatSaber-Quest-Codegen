#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(MainEffectContainerSO)
namespace GlobalNamespace {
class MainEffectSO;
}
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectContainerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainEffectContainerSO);
// Type: ::MainEffectContainerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15290))
// CS Name: ::MainEffectContainerSO*
class CORDL_TYPE MainEffectContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _mainEffect offset 0x18
 __declspec(property(get=__get__mainEffect, put=__set__mainEffect)) ::GlobalNamespace::MainEffectSO*  _mainEffect;

/// @brief Field _postProcessEnabled offset 0x20
 __declspec(property(get=__get__postProcessEnabled, put=__set__postProcessEnabled)) ::GlobalNamespace::BoolSO*  _postProcessEnabled;

 __declspec(property(get=get_mainEffect)) ::GlobalNamespace::MainEffectSO*  mainEffect;

constexpr void __set__mainEffect(::GlobalNamespace::MainEffectSO*  value) ;

constexpr ::GlobalNamespace::MainEffectSO* __get__mainEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectSO*> __get__mainEffect() const;

constexpr void __set__postProcessEnabled(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get__postProcessEnabled() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get__postProcessEnabled() const;

/// @brief Method get_mainEffect addr 0x28082a8 size 0x8 virtual false final false
inline ::GlobalNamespace::MainEffectSO* get_mainEffect() ;

/// @brief Method OnEnable addr 0x28082b0 size 0x78 virtual true final false
inline void OnEnable() ;

/// @brief Method Init addr 0x2808328 size 0x74 virtual false final false
inline void Init(::GlobalNamespace::MainEffectSO*  mainEffect) ;

static inline ::GlobalNamespace::MainEffectContainerSO* New_ctor() ;

/// @brief Method .ctor addr 0x280839c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectContainerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainEffectContainerSO(MainEffectContainerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectContainerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainEffectContainerSO(MainEffectContainerSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MainEffectContainerSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectContainerSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectContainerSO*, "", "MainEffectContainerSO");
