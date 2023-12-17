#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextAsset)
namespace GlobalNamespace {
class __LocalizedTextAsset____c;
}
namespace GlobalNamespace {
class __LocalizedTextAsset____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __LocalizedTextAsset__TextInfo;
}
namespace UnityEngine {
class TextAsset;
}
namespace Polyglot {
struct Language;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace GlobalNamespace {
class __LocalizedTextAsset__TextInfo;
}
namespace GlobalNamespace {
class __LocalizedTextAsset____c;
}
namespace GlobalNamespace {
class __LocalizedTextAsset____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizedTextAsset);
MARK_REF_PTR_T(::GlobalNamespace::__LocalizedTextAsset__TextInfo);
MARK_REF_PTR_T(::GlobalNamespace::__LocalizedTextAsset____c);
MARK_REF_PTR_T(::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0);
// Type: ::TextInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5872))
// CS Name: ::LocalizedTextAsset::TextInfo*
class CORDL_TYPE __LocalizedTextAsset__TextInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field language offset 0x10
 __declspec(property(get=__get_language, put=__set_language)) ::Polyglot::Language  language;

/// @brief Field localizedText offset 0x18
 __declspec(property(get=__get_localizedText, put=__set_localizedText)) ::UnityEngine::TextAsset*  localizedText;

constexpr void __set_language(::Polyglot::Language  value) ;

constexpr ::Polyglot::Language& __get_language() ;

constexpr ::Polyglot::Language const& __get_language() const;

constexpr void __set_localizedText(::UnityEngine::TextAsset*  value) ;

constexpr ::UnityEngine::TextAsset* __get_localizedText() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> __get_localizedText() const;

static inline ::GlobalNamespace::__LocalizedTextAsset__TextInfo* New_ctor() ;

/// @brief Method .ctor addr 0x22f8944 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset__TextInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LocalizedTextAsset__TextInfo(__LocalizedTextAsset__TextInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset__TextInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LocalizedTextAsset__TextInfo(__LocalizedTextAsset__TextInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LocalizedTextAsset__TextInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalizedTextAsset__TextInfo, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass6_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5873))
// CS Name: ::LocalizedTextAsset::<>c__DisplayClass6_0*
class CORDL_TYPE __LocalizedTextAsset____c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field language offset 0x10
 __declspec(property(get=__get_language, put=__set_language)) ::Polyglot::Language  language;

constexpr void __set_language(::Polyglot::Language  value) ;

constexpr ::Polyglot::Language& __get_language() ;

constexpr ::Polyglot::Language const& __get_language() const;

static inline ::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0* New_ctor() ;

/// @brief Method .ctor addr 0x22f8934 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <get_localizedText>b__1 addr 0x22f894c size 0x24 virtual false final false
inline bool _get_localizedText_b__1(::GlobalNamespace::__LocalizedTextAsset__TextInfo*  t) ;

// Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LocalizedTextAsset____c__DisplayClass6_0(__LocalizedTextAsset____c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LocalizedTextAsset____c__DisplayClass6_0(__LocalizedTextAsset____c__DisplayClass6_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LocalizedTextAsset____c__DisplayClass6_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5874))
// CS Name: ::LocalizedTextAsset::<>c*
class CORDL_TYPE __LocalizedTextAsset____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__LocalizedTextAsset____c*  value) ;

static inline ::GlobalNamespace::__LocalizedTextAsset____c* getStaticF___9() ;

static inline void setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::__LocalizedTextAsset__TextInfo*,bool>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::__LocalizedTextAsset__TextInfo*,bool>* getStaticF___9__6_0() ;

static inline ::GlobalNamespace::__LocalizedTextAsset____c* New_ctor() ;

/// @brief Method .ctor addr 0x22f89d4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <get_localizedText>b__6_0 addr 0x22f89dc size 0x20 virtual false final false
inline bool _get_localizedText_b__6_0(::GlobalNamespace::__LocalizedTextAsset__TextInfo*  t) ;

// Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LocalizedTextAsset____c(__LocalizedTextAsset____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LocalizedTextAsset____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LocalizedTextAsset____c(__LocalizedTextAsset____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LocalizedTextAsset____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__6_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalizedTextAsset____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LocalizedTextAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5875))
// CS Name: ::LocalizedTextAsset*
class CORDL_TYPE LocalizedTextAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c = ::GlobalNamespace::__LocalizedTextAsset____c;

using __c__DisplayClass6_0 = ::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0;

using TextInfo = ::GlobalNamespace::__LocalizedTextAsset__TextInfo;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field _textInfos offset 0x18
 __declspec(property(get=__get__textInfos, put=__set__textInfos)) ::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*,::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*>  _textInfos;

/// @brief Field _lastTextInfo offset 0x20
 __declspec(property(get=__get__lastTextInfo, put=__set__lastTextInfo)) ::GlobalNamespace::__LocalizedTextAsset__TextInfo*  _lastTextInfo;

 __declspec(property(get=get_textInfos)) ::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*,::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*>  textInfos;

 __declspec(property(get=get_localizedText)) ::StringW  localizedText;

constexpr void __set__textInfos(::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*,::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*,::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*>& __get__textInfos() ;

constexpr ::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*,::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*> const& __get__textInfos() const;

constexpr void __set__lastTextInfo(::GlobalNamespace::__LocalizedTextAsset__TextInfo*  value) ;

constexpr ::GlobalNamespace::__LocalizedTextAsset__TextInfo* __get__lastTextInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalizedTextAsset__TextInfo*> __get__lastTextInfo() const;

/// @brief Method get_textInfos addr 0x22f8620 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::__LocalizedTextAsset__TextInfo*,::Array<::GlobalNamespace::__LocalizedTextAsset__TextInfo*>*> get_textInfos() ;

/// @brief Method get_localizedText addr 0x22f8628 size 0x30c virtual false final false
inline ::StringW get_localizedText() ;

static inline ::GlobalNamespace::LocalizedTextAsset* New_ctor() ;

/// @brief Method .ctor addr 0x22f893c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedTextAsset(LocalizedTextAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedTextAsset(LocalizedTextAsset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalizedTextAsset()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedTextAsset, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizedTextAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedTextAsset*, "", "LocalizedTextAsset");
NEED_NO_BOX(::GlobalNamespace::__LocalizedTextAsset__TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalizedTextAsset__TextInfo*, "", "LocalizedTextAsset/TextInfo");
NEED_NO_BOX(::GlobalNamespace::__LocalizedTextAsset____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalizedTextAsset____c*, "", "LocalizedTextAsset/<>c");
NEED_NO_BOX(::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalizedTextAsset____c__DisplayClass6_0*, "", "LocalizedTextAsset/<>c__DisplayClass6_0");
