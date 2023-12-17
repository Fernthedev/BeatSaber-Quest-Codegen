#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_ResourceManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_Settings;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace TMPro {
class TMP_ResourceManager;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_ResourceManager);
// Type: TMPro::TMP_ResourceManager
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12407))
// CS Name: ::TMPro::TMP_ResourceManager*
class CORDL_TYPE TMP_ResourceManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_instance(::TMPro::TMP_ResourceManager*  value) ;

static inline ::TMPro::TMP_ResourceManager* getStaticF_s_instance() ;

static inline void setStaticF_s_TextSettings(::TMPro::TMP_Settings*  value) ;

static inline ::TMPro::TMP_Settings* getStaticF_s_TextSettings() ;

static inline void setStaticF_s_FontAssetReferences(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*  value) ;

static inline ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>* getStaticF_s_FontAssetReferences() ;

static inline void setStaticF_s_FontAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_FontAsset*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_FontAsset*>* getStaticF_s_FontAssetReferenceLookup() ;

/// @brief Method GetTextSettings addr 0x2c3f588 size 0x110 virtual false final false
static inline ::TMPro::TMP_Settings* GetTextSettings() ;

/// @brief Method AddFontAsset addr 0x2c3f698 size 0x154 virtual false final false
static inline void AddFontAsset(::TMPro::TMP_FontAsset*  fontAsset) ;

/// @brief Method TryGetFontAsset addr 0x2c3f7ec size 0x94 virtual false final false
static inline bool TryGetFontAsset(int32_t  hashcode, ByRef<::TMPro::TMP_FontAsset*>  fontAsset) ;

/// @brief Method RebuildFontAssetCache addr 0x2c3f880 size 0x118 virtual false final false
static inline void RebuildFontAssetCache(int32_t  instanceID) ;

static inline ::TMPro::TMP_ResourceManager* New_ctor() ;

/// @brief Method .ctor addr 0x2c3f580 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ResourceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_ResourceManager(TMP_ResourceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ResourceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_ResourceManager(TMP_ResourceManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TMP_ResourceManager()  = default;
public:


// Fields

// Static field s_instance

// Static field s_TextSettings

// Static field s_FontAssetReferences

// Static field s_FontAssetReferenceLookup


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_ResourceManager, 0x10>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::TMP_ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ResourceManager*, "TMPro", "TMP_ResourceManager");
