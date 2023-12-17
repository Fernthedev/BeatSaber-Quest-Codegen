#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringListSO)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StringListSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StringListSO);
// Type: ::StringListSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15871))
// CS Name: ::StringListSO*
class CORDL_TYPE StringListSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _strings offset 0x18
 __declspec(property(get=__get__strings, put=__set__strings)) ::ArrayW<::StringW,::Array<::StringW>*>  _strings;

 __declspec(property(get=get_strings)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  strings;

constexpr void __set__strings(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__strings() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__strings() const;

/// @brief Method get_strings addr 0xe28a80 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_strings() ;

static inline ::GlobalNamespace::StringListSO* New_ctor() ;

/// @brief Method .ctor addr 0xe28a88 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StringListSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringListSO(StringListSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringListSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringListSO(StringListSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StringListSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StringListSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StringListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringListSO*, "", "StringListSO");
