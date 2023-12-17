#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextResourceManager)
namespace UnityEngine::TextCore::Text {
struct __TextResourceManager__FontAssetRef;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextResourceManager;
}
namespace UnityEngine::TextCore::Text {
struct __TextResourceManager__FontAssetRef;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextResourceManager);
MARK_VAL_T(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef);
// Type: ::FontAssetRef
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13720))
// CS Name: ::TextResourceManager::FontAssetRef
struct CORDL_TYPE __TextResourceManager__FontAssetRef : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field nameHashCode offset 0x0
 __declspec(property(get=__get_nameHashCode, put=__set_nameHashCode)) int32_t  nameHashCode;

/// @brief Field familyNameHashCode offset 0x4
 __declspec(property(get=__get_familyNameHashCode, put=__set_familyNameHashCode)) int32_t  familyNameHashCode;

/// @brief Field styleNameHashCode offset 0x8
 __declspec(property(get=__get_styleNameHashCode, put=__set_styleNameHashCode)) int32_t  styleNameHashCode;

/// @brief Field familyNameAndStyleHashCode offset 0x10
 __declspec(property(get=__get_familyNameAndStyleHashCode, put=__set_familyNameAndStyleHashCode)) int64_t  familyNameAndStyleHashCode;

/// @brief Field fontAsset offset 0x18
 __declspec(property(get=__get_fontAsset, put=__set_fontAsset)) ::UnityEngine::TextCore::Text::FontAsset*  fontAsset;

constexpr void __set_nameHashCode(int32_t  value) ;

constexpr int32_t& __get_nameHashCode() ;

constexpr int32_t const& __get_nameHashCode() const;

constexpr void __set_familyNameHashCode(int32_t  value) ;

constexpr int32_t& __get_familyNameHashCode() ;

constexpr int32_t const& __get_familyNameHashCode() const;

constexpr void __set_styleNameHashCode(int32_t  value) ;

constexpr int32_t& __get_styleNameHashCode() ;

constexpr int32_t const& __get_styleNameHashCode() const;

constexpr void __set_familyNameAndStyleHashCode(int64_t  value) ;

constexpr int64_t& __get_familyNameAndStyleHashCode() ;

constexpr int64_t const& __get_familyNameAndStyleHashCode() const;

constexpr void __set_fontAsset(::UnityEngine::TextCore::Text::FontAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset* __get_fontAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> __get_fontAsset() const;

/// @brief Method .ctor addr 0x2d4a378 size 0x18 virtual false final false
inline void _ctor(int32_t  nameHashCode, int32_t  familyNameHashCode, int32_t  styleNameHashCode, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset) ;

// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: None }]
constexpr __TextResourceManager__FontAssetRef(int32_t  nameHashCode, int32_t  familyNameHashCode, int32_t  styleNameHashCode, int64_t  familyNameAndStyleHashCode, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TextResourceManager__FontAssetRef(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TextResourceManager__FontAssetRef()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextResourceManager
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13721))
// CS Name: ::UnityEngine.TextCore.Text::TextResourceManager*
class CORDL_TYPE TextResourceManager : public ::System::Object {
public:
// Declarations
using FontAssetRef = ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_FontAssetReferences(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>* getStaticF_s_FontAssetReferences() ;

static inline void setStaticF_s_FontAssetNameReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset*>* getStaticF_s_FontAssetNameReferenceLookup() ;

static inline void setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup(::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::TextCore::Text::FontAsset*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::TextCore::Text::FontAsset*>* getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup() ;

static inline void setStaticF_s_FontAssetRemovalList(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_FontAssetRemovalList() ;

static inline void setStaticF_k_RegularStyleHashCode(int32_t  value) ;

static inline int32_t getStaticF_k_RegularStyleHashCode() ;

/// @brief Method AddFontAsset addr 0x2d49e2c size 0x4f4 virtual false final false
static inline void AddFontAsset(::UnityEngine::TextCore::Text::FontAsset*  fontAsset) ;

// Ctor Parameters [CppParam { name: "", ty: "TextResourceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextResourceManager(TextResourceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextResourceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextResourceManager(TextResourceManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextResourceManager()  = default;
public:


// Fields

// Static field s_FontAssetReferences

// Static field s_FontAssetNameReferenceLookup

// Static field s_FontAssetFamilyNameAndStyleReferenceLookup

// Static field s_FontAssetRemovalList

// Static field k_RegularStyleHashCode


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextResourceManager, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextResourceManager*, "UnityEngine.TextCore.Text", "TextResourceManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef, "UnityEngine.TextCore.Text", "TextResourceManager/FontAssetRef");
