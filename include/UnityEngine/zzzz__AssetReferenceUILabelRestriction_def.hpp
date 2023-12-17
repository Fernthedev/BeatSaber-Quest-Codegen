#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AssetReferenceUIRestriction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceUILabelRestriction)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetReferenceUILabelRestriction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetReferenceUILabelRestriction);
// Type: UnityEngine::AssetReferenceUILabelRestriction
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14045))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14046))
// CS Name: ::UnityEngine::AssetReferenceUILabelRestriction*
class CORDL_TYPE AssetReferenceUILabelRestriction : public ::UnityEngine::AssetReferenceUIRestriction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::AssetReferenceUIRestriction)]{};

/// @brief Field m_AllowedLabels offset 0x10
 __declspec(property(get=__get_m_AllowedLabels, put=__set_m_AllowedLabels)) ::ArrayW<::StringW,::Array<::StringW>*>  m_AllowedLabels;

/// @brief Field m_CachedToString offset 0x18
 __declspec(property(get=__get_m_CachedToString, put=__set_m_CachedToString)) ::StringW  m_CachedToString;

constexpr void __set_m_AllowedLabels(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_m_AllowedLabels() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_m_AllowedLabels() const;

constexpr void __set_m_CachedToString(::StringW  value) ;

constexpr ::StringW& __get_m_CachedToString() ;

constexpr ::StringW const& __get_m_CachedToString() const;

static inline ::UnityEngine::AssetReferenceUILabelRestriction* New_ctor(::ArrayW<::StringW,::Array<::StringW>*>  allowedLabels) ;

/// @brief Method .ctor addr 0x2a0f01c size 0x28 virtual false final false
inline void _ctor(::ArrayW<::StringW,::Array<::StringW>*>  allowedLabels) ;

/// @brief Method ValidateAsset addr 0x2a0f044 size 0x8 virtual true final false
inline bool ValidateAsset(::UnityEngine::Object*  obj) ;

/// @brief Method ValidateAsset addr 0x2a0f04c size 0x8 virtual true final false
inline bool ValidateAsset(::StringW  path) ;

/// @brief Method ToString addr 0x2a0f054 size 0xf4 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUILabelRestriction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetReferenceUILabelRestriction(AssetReferenceUILabelRestriction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceUILabelRestriction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetReferenceUILabelRestriction(AssetReferenceUILabelRestriction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetReferenceUILabelRestriction()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetReferenceUILabelRestriction, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AssetReferenceUILabelRestriction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetReferenceUILabelRestriction*, "UnityEngine", "AssetReferenceUILabelRestriction");
