#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConditionalImageMaterialSwitcher)
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalImageMaterialSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConditionalImageMaterialSwitcher);
// Type: ::ConditionalImageMaterialSwitcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5353))
// CS Name: ::ConditionalImageMaterialSwitcher*
class CORDL_TYPE ConditionalImageMaterialSwitcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _material0 offset 0x18
 __declspec(property(get=__get__material0, put=__set__material0)) ::UnityEngine::Material*  _material0;

/// @brief Field _material1 offset 0x20
 __declspec(property(get=__get__material1, put=__set__material1)) ::UnityEngine::Material*  _material1;

/// @brief Field _value offset 0x28
 __declspec(property(get=__get__value, put=__set__value)) ::GlobalNamespace::BoolSO*  _value;

/// @brief Field _image offset 0x30
 __declspec(property(get=__get__image, put=__set__image)) ::UnityEngine::UI::Image*  _image;

constexpr void __set__material0(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material0() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material0() const;

constexpr void __set__material1(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material1() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material1() const;

constexpr void __set__value(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get__value() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get__value() const;

constexpr void __set__image(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__image() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__image() const;

/// @brief Method Awake addr 0x226bfb8 size 0x80 virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::ConditionalImageMaterialSwitcher* New_ctor() ;

/// @brief Method .ctor addr 0x226c038 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalImageMaterialSwitcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConditionalImageMaterialSwitcher(ConditionalImageMaterialSwitcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalImageMaterialSwitcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConditionalImageMaterialSwitcher(ConditionalImageMaterialSwitcher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConditionalImageMaterialSwitcher()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalImageMaterialSwitcher, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalImageMaterialSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalImageMaterialSwitcher*, "", "ConditionalImageMaterialSwitcher");
