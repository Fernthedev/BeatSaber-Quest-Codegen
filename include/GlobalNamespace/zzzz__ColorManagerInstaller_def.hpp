#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(ColorManagerInstaller)
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorManagerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorManagerInstaller);
// Type: ::ColorManagerInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5389))
// CS Name: ::ColorManagerInstaller*
class CORDL_TYPE ColorManagerInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _menuColorScheme offset 0x20
 __declspec(property(get=__get__menuColorScheme, put=__set__menuColorScheme)) ::GlobalNamespace::ColorSchemeSO*  _menuColorScheme;

constexpr void __set__menuColorScheme(::GlobalNamespace::ColorSchemeSO*  value) ;

constexpr ::GlobalNamespace::ColorSchemeSO* __get__menuColorScheme() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> __get__menuColorScheme() const;

/// @brief Method InstallBindings addr 0x226f59c size 0xb8 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::ColorManagerInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x226f654 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorManagerInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorManagerInstaller(ColorManagerInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorManagerInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorManagerInstaller(ColorManagerInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorManagerInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorManagerInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorManagerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorManagerInstaller*, "", "ColorManagerInstaller");
