#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(BTSStarTextEventInstaller)
namespace GlobalNamespace {
class BTSStarTextEffectController;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEventInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSStarTextEventInstaller);
// Type: ::BTSStarTextEventInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3986))
// CS Name: ::BTSStarTextEventInstaller*
class CORDL_TYPE BTSStarTextEventInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _btsStarTextEffectController offset 0x20
 __declspec(property(get=__get__btsStarTextEffectController, put=__set__btsStarTextEffectController)) ::GlobalNamespace::BTSStarTextEffectController*  _btsStarTextEffectController;

constexpr void __set__btsStarTextEffectController(::GlobalNamespace::BTSStarTextEffectController*  value) ;

constexpr ::GlobalNamespace::BTSStarTextEffectController* __get__btsStarTextEffectController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSStarTextEffectController*> __get__btsStarTextEffectController() const;

/// @brief Method InstallBindings addr 0x221dc9c size 0x84 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::BTSStarTextEventInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x221dd20 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BTSStarTextEventInstaller(BTSStarTextEventInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BTSStarTextEventInstaller(BTSStarTextEventInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BTSStarTextEventInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSStarTextEventInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEventInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEventInstaller*, "", "BTSStarTextEventInstaller");
