#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransitionTimingSO)
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class TransitionTimingSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TransitionTimingSO);
// Type: ::TransitionTimingSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5463))
// CS Name: ::TransitionTimingSO*
class CORDL_TYPE TransitionTimingSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _easeType offset 0x18
 __declspec(property(get=__get__easeType, put=__set__easeType)) ::GlobalNamespace::EaseType  _easeType;

/// @brief Field _easeDuration offset 0x1c
 __declspec(property(get=__get__easeDuration, put=__set__easeDuration)) float_t  _easeDuration;

 __declspec(property(get=get_easeType)) ::GlobalNamespace::EaseType  easeType;

 __declspec(property(get=get_easeDuration)) float_t  easeDuration;

constexpr void __set__easeType(::GlobalNamespace::EaseType  value) ;

constexpr ::GlobalNamespace::EaseType& __get__easeType() ;

constexpr ::GlobalNamespace::EaseType const& __get__easeType() const;

constexpr void __set__easeDuration(float_t  value) ;

constexpr float_t& __get__easeDuration() ;

constexpr float_t const& __get__easeDuration() const;

/// @brief Method get_easeType addr 0x228007c size 0x8 virtual false final false
inline ::GlobalNamespace::EaseType get_easeType() ;

/// @brief Method get_easeDuration addr 0x2280084 size 0x8 virtual false final false
inline float_t get_easeDuration() ;

static inline ::GlobalNamespace::TransitionTimingSO* New_ctor() ;

/// @brief Method .ctor addr 0x228008c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TransitionTimingSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransitionTimingSO(TransitionTimingSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransitionTimingSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransitionTimingSO(TransitionTimingSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TransitionTimingSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TransitionTimingSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TransitionTimingSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransitionTimingSO*, "", "TransitionTimingSO");
