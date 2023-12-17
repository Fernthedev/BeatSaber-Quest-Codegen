#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TextMeshProAutosizeGroup)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class TextMeshProAutosizeGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextMeshProAutosizeGroup);
// Type: ::TextMeshProAutosizeGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13496))
// CS Name: ::TextMeshProAutosizeGroup*
class CORDL_TYPE TextMeshProAutosizeGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _texts offset 0x18
 __declspec(property(get=__get__texts, put=__set__texts)) ::ArrayW<::TMPro::TMP_Text*,::Array<::TMPro::TMP_Text*>*>  _texts;

constexpr void __set__texts(::ArrayW<::TMPro::TMP_Text*,::Array<::TMPro::TMP_Text*>*>  value) ;

constexpr ::ArrayW<::TMPro::TMP_Text*,::Array<::TMPro::TMP_Text*>*>& __get__texts() ;

constexpr ::ArrayW<::TMPro::TMP_Text*,::Array<::TMPro::TMP_Text*>*> const& __get__texts() const;

/// @brief Method Start addr 0x2115e44 size 0x108 virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::TextMeshProAutosizeGroup* New_ctor() ;

/// @brief Method .ctor addr 0x2115f4c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProAutosizeGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextMeshProAutosizeGroup(TextMeshProAutosizeGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProAutosizeGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextMeshProAutosizeGroup(TextMeshProAutosizeGroup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextMeshProAutosizeGroup()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextMeshProAutosizeGroup, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextMeshProAutosizeGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextMeshProAutosizeGroup*, "", "TextMeshProAutosizeGroup");
