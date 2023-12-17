#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DisableIfNotPlatform)
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableIfNotPlatform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableIfNotPlatform);
// Type: ::DisableIfNotPlatform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5361))
// CS Name: ::DisableIfNotPlatform*
class CORDL_TYPE DisableIfNotPlatform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _whitelistPlatforms offset 0x18
 __declspec(property(get=__get__whitelistPlatforms, put=__set__whitelistPlatforms)) ::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>  _whitelistPlatforms;

constexpr void __set__whitelistPlatforms(::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>  value) ;

constexpr ::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>& __get__whitelistPlatforms() ;

constexpr ::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*> const& __get__whitelistPlatforms() const;

/// @brief Method Awake addr 0x226c488 size 0x98 virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::DisableIfNotPlatform* New_ctor() ;

/// @brief Method .ctor addr 0x226c520 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DisableIfNotPlatform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableIfNotPlatform(DisableIfNotPlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableIfNotPlatform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableIfNotPlatform(DisableIfNotPlatform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DisableIfNotPlatform()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableIfNotPlatform, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableIfNotPlatform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableIfNotPlatform*, "", "DisableIfNotPlatform");
