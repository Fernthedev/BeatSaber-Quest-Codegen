#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SongPackMasksModel)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class SongPackMasksModelSO;
}
namespace GlobalNamespace {
struct __SongPackMasksModel__LocalizedText;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace Polyglot {
struct Language;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace GlobalNamespace {
struct __SongPackMasksModel__LocalizedText;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMasksModel);
MARK_VAL_T(::GlobalNamespace::__SongPackMasksModel__LocalizedText);
// Type: ::LocalizedText
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4518))
// CS Name: ::SongPackMasksModel::LocalizedText
struct CORDL_TYPE __SongPackMasksModel__LocalizedText : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field text offset 0x0
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

/// @brief Field isPlural offset 0x8
 __declspec(property(get=__get_isPlural, put=__set_isPlural)) bool  isPlural;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

constexpr void __set_isPlural(bool  value) ;

constexpr bool& __get_isPlural() ;

constexpr bool const& __get_isPlural() const;

static inline void setStaticF_empty(::GlobalNamespace::__SongPackMasksModel__LocalizedText  value) ;

static inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText getStaticF_empty() ;

/// @brief Method .ctor addr 0x2364000 size 0x10 virtual false final false
inline void _ctor(::StringW  text, bool  isPlural) ;

// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isPlural", ty: "bool", modifiers: "", def_value: None }]
constexpr __SongPackMasksModel__LocalizedText(::StringW  text, bool  isPlural) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SongPackMasksModel__LocalizedText(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SongPackMasksModel__LocalizedText()  = default;


// Fields

// Static field empty


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPackMasksModel__LocalizedText, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SongPackMasksModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4519))
// CS Name: ::SongPackMasksModel*
class CORDL_TYPE SongPackMasksModel : public ::System::Object {
public:
// Declarations
using LocalizedText = ::GlobalNamespace::__SongPackMasksModel__LocalizedText;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field content offset 0x10
 __declspec(property(get=__get_content, put=__set_content)) ::GlobalNamespace::SongPackMasksModelSO*  content;

/// @brief Field allSongPackMask offset 0x18
 __declspec(property(get=__get_allSongPackMask, put=__set_allSongPackMask)) ::GlobalNamespace::SongPackMask  allSongPackMask;

/// @brief Field _currentLocalizedLanguage offset 0x38
 __declspec(property(get=__get__currentLocalizedLanguage, put=__set__currentLocalizedLanguage)) ::Polyglot::Language  _currentLocalizedLanguage;

/// @brief Field _songPackSerializedNameToLocalizedNameDict offset 0x40
 __declspec(property(get=__get__songPackSerializedNameToLocalizedNameDict, put=__set__songPackSerializedNameToLocalizedNameDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SongPackMasksModel__LocalizedText>*  _songPackSerializedNameToLocalizedNameDict;

/// @brief Field _songPackSerializedNameToMaskDict offset 0x48
 __declspec(property(get=__get__songPackSerializedNameToMaskDict, put=__set__songPackSerializedNameToMaskDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>*  _songPackSerializedNameToMaskDict;

/// @brief Field _songPackMaskToSerializedNameDict offset 0x50
 __declspec(property(get=__get__songPackMaskToSerializedNameDict, put=__set__songPackMaskToSerializedNameDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask,::StringW>*  _songPackMaskToSerializedNameDict;

constexpr void __set_content(::GlobalNamespace::SongPackMasksModelSO*  value) ;

constexpr ::GlobalNamespace::SongPackMasksModelSO* __get_content() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModelSO*> __get_content() const;

constexpr void __set_allSongPackMask(::GlobalNamespace::SongPackMask  value) ;

constexpr ::GlobalNamespace::SongPackMask& __get_allSongPackMask() ;

constexpr ::GlobalNamespace::SongPackMask const& __get_allSongPackMask() const;

constexpr void __set__currentLocalizedLanguage(::Polyglot::Language  value) ;

constexpr ::Polyglot::Language& __get__currentLocalizedLanguage() ;

constexpr ::Polyglot::Language const& __get__currentLocalizedLanguage() const;

constexpr void __set__songPackSerializedNameToLocalizedNameDict(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SongPackMasksModel__LocalizedText>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SongPackMasksModel__LocalizedText>* __get__songPackSerializedNameToLocalizedNameDict() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SongPackMasksModel__LocalizedText>*> __get__songPackSerializedNameToLocalizedNameDict() const;

constexpr void __set__songPackSerializedNameToMaskDict(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>* __get__songPackSerializedNameToMaskDict() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>*> __get__songPackSerializedNameToMaskDict() const;

constexpr void __set__songPackMaskToSerializedNameDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask,::StringW>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask,::StringW>* __get__songPackMaskToSerializedNameDict() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask,::StringW>*> __get__songPackMaskToSerializedNameDict() const;

static inline ::GlobalNamespace::SongPackMasksModel* New_ctor(::GlobalNamespace::SongPackMasksModelSO*  songPackMasks) ;

/// @brief Method .ctor addr 0x2363478 size 0x94 virtual false final false
inline void _ctor(::GlobalNamespace::SongPackMasksModelSO*  songPackMasks) ;

/// @brief Method Init addr 0x236350c size 0x688 virtual false final false
inline void Init() ;

/// @brief Method GetSongPackMaskText addr 0x2364010 size 0x98 virtual false final false
inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText GetSongPackMaskText(ByRef<::GlobalNamespace::SongPackMask>  songPackMask) ;

/// @brief Method ToLocalizedName addr 0x2364130 size 0xac virtual false final false
inline ::GlobalNamespace::__SongPackMasksModel__LocalizedText ToLocalizedName(::StringW  serializedName) ;

/// @brief Method TryGetSongPackMask addr 0x23641dc size 0x68 virtual false final false
inline bool TryGetSongPackMask(::StringW  serializedName, ByRef<::GlobalNamespace::SongPackMask>  songPackMask) ;

/// @brief Method ToSongPackMask addr 0x2363b94 size 0x48 virtual false final false
inline ::GlobalNamespace::SongPackMask ToSongPackMask(::StringW  serializedName) ;

/// @brief Method TryGetSerializedName addr 0x23640a8 size 0x88 virtual false final false
inline bool TryGetSerializedName(::GlobalNamespace::SongPackMask  songPackMask, ByRef<::StringW>  serializedName) ;

/// @brief Method ToSerializedName addr 0x2364244 size 0x80 virtual false final false
inline ::StringW ToSerializedName(::GlobalNamespace::SongPackMask  songPackMask) ;

// Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongPackMasksModel(SongPackMasksModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongPackMasksModel(SongPackMasksModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SongPackMasksModel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModel, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModel*, "", "SongPackMasksModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPackMasksModel__LocalizedText, "", "SongPackMasksModel/LocalizedText");
