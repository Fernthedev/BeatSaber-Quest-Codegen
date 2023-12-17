#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(FireworksItemPoolInstaller)
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class FireworkItemController;
}
// Forward declare root types
namespace GlobalNamespace {
class FireworksItemPoolInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FireworksItemPoolInstaller);
// Type: ::FireworksItemPoolInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4849))
// CS Name: ::FireworksItemPoolInstaller*
class CORDL_TYPE FireworksItemPoolInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _fireworksController offset 0x20
 __declspec(property(get=__get__fireworksController, put=__set__fireworksController)) ::GlobalNamespace::FireworksController*  _fireworksController;

/// @brief Field _fireworkItemControllerPrefab offset 0x28
 __declspec(property(get=__get__fireworkItemControllerPrefab, put=__set__fireworkItemControllerPrefab)) ::GlobalNamespace::FireworkItemController*  _fireworkItemControllerPrefab;

constexpr void __set__fireworksController(::GlobalNamespace::FireworksController*  value) ;

constexpr ::GlobalNamespace::FireworksController* __get__fireworksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworksController*> __get__fireworksController() const;

constexpr void __set__fireworkItemControllerPrefab(::GlobalNamespace::FireworkItemController*  value) ;

constexpr ::GlobalNamespace::FireworkItemController* __get__fireworkItemControllerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworkItemController*> __get__fireworkItemControllerPrefab() const;

/// @brief Method InstallBindings addr 0x2397dec size 0x94 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::FireworksItemPoolInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x2397e80 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FireworksItemPoolInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FireworksItemPoolInstaller(FireworksItemPoolInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FireworksItemPoolInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FireworksItemPoolInstaller(FireworksItemPoolInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FireworksItemPoolInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireworksItemPoolInstaller, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireworksItemPoolInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireworksItemPoolInstaller*, "", "FireworksItemPoolInstaller");
