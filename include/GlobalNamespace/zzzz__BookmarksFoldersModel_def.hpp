#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BookmarksFoldersModel)
namespace GlobalNamespace {
class __BookmarksFoldersModel____c;
}
namespace GlobalNamespace {
class FileBrowserItem;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct __Environment__SpecialFolder;
}
// Forward declare root types
namespace GlobalNamespace {
class BookmarksFoldersModel;
}
namespace GlobalNamespace {
class __BookmarksFoldersModel____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BookmarksFoldersModel);
MARK_REF_PTR_T(::GlobalNamespace::__BookmarksFoldersModel____c);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4138))
// CS Name: ::BookmarksFoldersModel::<>c*
class CORDL_TYPE __BookmarksFoldersModel____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__BookmarksFoldersModel____c*  value) ;

static inline ::GlobalNamespace::__BookmarksFoldersModel____c* getStaticF___9() ;

static inline void setStaticF___9__3_0(::System::Func_2<::System::__Environment__SpecialFolder,::StringW>*  value) ;

static inline ::System::Func_2<::System::__Environment__SpecialFolder,::StringW>* getStaticF___9__3_0() ;

static inline ::GlobalNamespace::__BookmarksFoldersModel____c* New_ctor() ;

/// @brief Method .ctor addr 0x223c5fc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <get_bookmarksFolders>b__3_0 addr 0x223c604 size 0xc virtual false final false
inline ::StringW _get_bookmarksFolders_b__3_0(::System::__Environment__SpecialFolder  specialFolder) ;

// Ctor Parameters [CppParam { name: "", ty: "__BookmarksFoldersModel____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BookmarksFoldersModel____c(__BookmarksFoldersModel____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BookmarksFoldersModel____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BookmarksFoldersModel____c(__BookmarksFoldersModel____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BookmarksFoldersModel____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__3_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BookmarksFoldersModel____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BookmarksFoldersModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4139))
// CS Name: ::BookmarksFoldersModel*
class CORDL_TYPE BookmarksFoldersModel : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using __c = ::GlobalNamespace::__BookmarksFoldersModel____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field myFolders offset 0x18
 __declspec(property(get=__get_myFolders, put=__set_myFolders)) ::ArrayW<::StringW,::Array<::StringW>*>  myFolders;

/// @brief Field _bookmarksFolders offset 0x20
 __declspec(property(get=__get__bookmarksFolders, put=__set__bookmarksFolders)) ::ArrayW<::GlobalNamespace::FileBrowserItem*,::Array<::GlobalNamespace::FileBrowserItem*>*>  _bookmarksFolders;

 __declspec(property(get=get_bookmarksFolders)) ::ArrayW<::GlobalNamespace::FileBrowserItem*,::Array<::GlobalNamespace::FileBrowserItem*>*>  bookmarksFolders;

constexpr void __set_myFolders(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_myFolders() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_myFolders() const;

constexpr void __set__bookmarksFolders(::ArrayW<::GlobalNamespace::FileBrowserItem*,::Array<::GlobalNamespace::FileBrowserItem*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*,::Array<::GlobalNamespace::FileBrowserItem*>*>& __get__bookmarksFolders() ;

constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*,::Array<::GlobalNamespace::FileBrowserItem*>*> const& __get__bookmarksFolders() const;

/// @brief Method get_bookmarksFolders addr 0x223bffc size 0x594 virtual false final false
inline ::ArrayW<::GlobalNamespace::FileBrowserItem*,::Array<::GlobalNamespace::FileBrowserItem*>*> get_bookmarksFolders() ;

static inline ::GlobalNamespace::BookmarksFoldersModel* New_ctor() ;

/// @brief Method .ctor addr 0x223c590 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BookmarksFoldersModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BookmarksFoldersModel(BookmarksFoldersModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BookmarksFoldersModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BookmarksFoldersModel(BookmarksFoldersModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BookmarksFoldersModel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BookmarksFoldersModel, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BookmarksFoldersModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BookmarksFoldersModel*, "", "BookmarksFoldersModel");
NEED_NO_BOX(::GlobalNamespace::__BookmarksFoldersModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BookmarksFoldersModel____c*, "", "BookmarksFoldersModel/<>c");
