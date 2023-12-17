#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableSpatializerOnUnsupportedPlatforms)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableSpatializerOnUnsupportedPlatforms;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms);
// Type: ::DisableSpatializerOnUnsupportedPlatforms
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4061))
// CS Name: ::DisableSpatializerOnUnsupportedPlatforms*
class CORDL_TYPE DisableSpatializerOnUnsupportedPlatforms : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioSource offset 0x18
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

static inline ::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms* New_ctor() ;

/// @brief Method .ctor addr 0x222d340 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DisableSpatializerOnUnsupportedPlatforms", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableSpatializerOnUnsupportedPlatforms(DisableSpatializerOnUnsupportedPlatforms && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableSpatializerOnUnsupportedPlatforms", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableSpatializerOnUnsupportedPlatforms(DisableSpatializerOnUnsupportedPlatforms const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DisableSpatializerOnUnsupportedPlatforms()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms*, "", "DisableSpatializerOnUnsupportedPlatforms");
