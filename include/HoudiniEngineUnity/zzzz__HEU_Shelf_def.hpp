#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_Shelf)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_ShelfToolData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Shelf;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Shelf);
// Type: HoudiniEngineUnity::HEU_Shelf
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9858))
// CS Name: ::HoudiniEngineUnity::HEU_Shelf*
class CORDL_TYPE HEU_Shelf : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _shelfName offset 0x10
 __declspec(property(get=__get__shelfName, put=__set__shelfName)) ::StringW  _shelfName;

/// @brief Field _shelfPath offset 0x18
 __declspec(property(get=__get__shelfPath, put=__set__shelfPath)) ::StringW  _shelfPath;

/// @brief Field _defaultShelf offset 0x20
 __declspec(property(get=__get__defaultShelf, put=__set__defaultShelf)) bool  _defaultShelf;

/// @brief Field _tools offset 0x28
 __declspec(property(get=__get__tools, put=__set__tools)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*  _tools;

constexpr void __set__shelfName(::StringW  value) ;

constexpr ::StringW& __get__shelfName() ;

constexpr ::StringW const& __get__shelfName() const;

constexpr void __set__shelfPath(::StringW  value) ;

constexpr ::StringW& __get__shelfPath() ;

constexpr ::StringW const& __get__shelfPath() const;

constexpr void __set__defaultShelf(bool  value) ;

constexpr bool& __get__defaultShelf() ;

constexpr bool const& __get__defaultShelf() const;

constexpr void __set__tools(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>* __get__tools() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*> __get__tools() const;

static inline ::HoudiniEngineUnity::HEU_Shelf* New_ctor() ;

/// @brief Method .ctor addr 0x21d06f8 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Shelf", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_Shelf(HEU_Shelf && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Shelf", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_Shelf(HEU_Shelf const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_Shelf()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Shelf, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Shelf);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Shelf*, "HoudiniEngineUnity", "HEU_Shelf");
