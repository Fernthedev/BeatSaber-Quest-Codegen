#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentKeywords)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentKeywords;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentKeywords);
// Type: ::EnvironmentKeywords
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4174))
// CS Name: ::EnvironmentKeywords*
class CORDL_TYPE EnvironmentKeywords : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _environmentKeywords offset 0x10
 __declspec(property(get=__get__environmentKeywords, put=__set__environmentKeywords)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  _environmentKeywords;

/// @brief Field _environmentKeywordsSet offset 0x18
 __declspec(property(get=__get__environmentKeywordsSet, put=__set__environmentKeywordsSet)) ::System::Collections::Generic::HashSet_1<::StringW>*  _environmentKeywordsSet;

 __declspec(property(get=get_environmentKeywords)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  environmentKeywords;

constexpr void __set__environmentKeywords(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* __get__environmentKeywords() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __get__environmentKeywords() const;

constexpr void __set__environmentKeywordsSet(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* __get__environmentKeywordsSet() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> __get__environmentKeywordsSet() const;

/// @brief Method get_environmentKeywords addr 0x22403a4 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_environmentKeywords() ;

static inline ::GlobalNamespace::EnvironmentKeywords* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  environmentKeywords) ;

/// @brief Method .ctor addr 0x22403ac size 0x104 virtual false final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  environmentKeywords) ;

/// @brief Method HasKeyword addr 0x22404b0 size 0x58 virtual false final false
inline bool HasKeyword(::StringW  keyword) ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentKeywords", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentKeywords(EnvironmentKeywords && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentKeywords", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentKeywords(EnvironmentKeywords const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentKeywords()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentKeywords, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentKeywords);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentKeywords*, "", "EnvironmentKeywords");
