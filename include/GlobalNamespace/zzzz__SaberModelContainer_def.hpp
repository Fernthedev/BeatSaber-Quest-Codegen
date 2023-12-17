#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SaberModelContainer)
namespace GlobalNamespace {
class SaberModelController;
}
namespace GlobalNamespace {
class Saber;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberModelContainer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberModelContainer);
// Type: ::SaberModelContainer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5297))
// CS Name: ::SaberModelContainer*
class CORDL_TYPE SaberModelContainer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _saber offset 0x18
 __declspec(property(get=__get__saber, put=__set__saber)) ::GlobalNamespace::Saber*  _saber;

/// @brief Field _saberModelControllerPrefab offset 0x20
 __declspec(property(get=__get__saberModelControllerPrefab, put=__set__saberModelControllerPrefab)) ::GlobalNamespace::SaberModelController*  _saberModelControllerPrefab;

/// @brief Field _container offset 0x28
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

constexpr void __set__saber(::GlobalNamespace::Saber*  value) ;

constexpr ::GlobalNamespace::Saber* __get__saber() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> __get__saber() const;

constexpr void __set__saberModelControllerPrefab(::GlobalNamespace::SaberModelController*  value) ;

constexpr ::GlobalNamespace::SaberModelController* __get__saberModelControllerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberModelController*> __get__saberModelControllerPrefab() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

/// @brief Method Start addr 0x2264128 size 0x84 virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::SaberModelContainer* New_ctor() ;

/// @brief Method .ctor addr 0x226449c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SaberModelContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaberModelContainer(SaberModelContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaberModelContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaberModelContainer(SaberModelContainer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SaberModelContainer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberModelContainer, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberModelContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberModelContainer*, "", "SaberModelContainer");
