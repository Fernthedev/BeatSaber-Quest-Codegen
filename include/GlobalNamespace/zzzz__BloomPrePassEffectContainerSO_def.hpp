#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassEffectContainerSO)
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassEffectContainerSO);
// Type: ::BloomPrePassEffectContainerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14469))
// CS Name: ::BloomPrePassEffectContainerSO*
class CORDL_TYPE BloomPrePassEffectContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _bloomPrePassEffect offset 0x18
 __declspec(property(get=__get__bloomPrePassEffect, put=__set__bloomPrePassEffect)) ::GlobalNamespace::BloomPrePassEffectSO*  _bloomPrePassEffect;

 __declspec(property(get=get_bloomPrePassEffect)) ::GlobalNamespace::BloomPrePassEffectSO*  bloomPrePassEffect;

constexpr void __set__bloomPrePassEffect(::GlobalNamespace::BloomPrePassEffectSO*  value) ;

constexpr ::GlobalNamespace::BloomPrePassEffectSO* __get__bloomPrePassEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectSO*> __get__bloomPrePassEffect() const;

/// @brief Method get_bloomPrePassEffect addr 0x21068cc size 0x8 virtual false final false
inline ::GlobalNamespace::BloomPrePassEffectSO* get_bloomPrePassEffect() ;

/// @brief Method Init addr 0x21068d4 size 0x8 virtual false final false
inline void Init(::GlobalNamespace::BloomPrePassEffectSO*  bloomPrePassEffect) ;

static inline ::GlobalNamespace::BloomPrePassEffectContainerSO* New_ctor() ;

/// @brief Method .ctor addr 0x21068dc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassEffectContainerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassEffectContainerSO(BloomPrePassEffectContainerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassEffectContainerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassEffectContainerSO(BloomPrePassEffectContainerSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassEffectContainerSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassEffectContainerSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassEffectContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassEffectContainerSO*, "", "BloomPrePassEffectContainerSO");
