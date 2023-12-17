#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuickPlaySetupData)
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySetupData);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack);
// Type: ::LocalizedCustomPackName
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4476))
// CS Name: ::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*
class CORDL_TYPE __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field language offset 0x10
 __declspec(property(get=__get_language, put=__set_language)) ::StringW  language;

/// @brief Field packName offset 0x18
 __declspec(property(get=__get_packName, put=__set_packName)) ::StringW  packName;

constexpr void __set_language(::StringW  value) ;

constexpr ::StringW& __get_language() ;

constexpr ::StringW const& __get_language() const;

constexpr void __set_packName(::StringW  value) ;

constexpr ::StringW& __get_packName() ;

constexpr ::StringW const& __get_packName() const;

static inline ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName* New_ctor() ;

/// @brief Method .ctor addr 0x2353bd4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName(__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName(__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LocalizedCustomPack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4477))
// CS Name: ::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*
class CORDL_TYPE __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field serializedName offset 0x10
 __declspec(property(get=__get_serializedName, put=__set_serializedName)) ::StringW  serializedName;

/// @brief Field order offset 0x18
 __declspec(property(get=__get_order, put=__set_order)) int32_t  order;

/// @brief Field localizedNames offset 0x20
 __declspec(property(get=__get_localizedNames, put=__set_localizedNames)) ::ArrayW<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*,::Array<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>*>  localizedNames;

/// @brief Field packIds offset 0x28
 __declspec(property(get=__get_packIds, put=__set_packIds)) ::System::Collections::Generic::List_1<::StringW>*  packIds;

constexpr void __set_serializedName(::StringW  value) ;

constexpr ::StringW& __get_serializedName() ;

constexpr ::StringW const& __get_serializedName() const;

constexpr void __set_order(int32_t  value) ;

constexpr int32_t& __get_order() ;

constexpr int32_t const& __get_order() const;

constexpr void __set_localizedNames(::ArrayW<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*,::Array<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*,::Array<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>*>& __get_localizedNames() ;

constexpr ::ArrayW<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*,::Array<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>*> const& __get_localizedNames() const;

constexpr void __set_packIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_packIds() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_packIds() const;

static inline ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack* New_ctor() ;

/// @brief Method .ctor addr 0x2353bdc size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack(__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack(__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PredefinedPack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4478))
// CS Name: ::QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*
class CORDL_TYPE __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field order offset 0x10
 __declspec(property(get=__get_order, put=__set_order)) int32_t  order;

/// @brief Field packId offset 0x18
 __declspec(property(get=__get_packId, put=__set_packId)) ::StringW  packId;

constexpr void __set_order(int32_t  value) ;

constexpr int32_t& __get_order() ;

constexpr int32_t const& __get_order() const;

constexpr void __set_packId(::StringW  value) ;

constexpr ::StringW& __get_packId() ;

constexpr ::StringW const& __get_packId() const;

static inline ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack* New_ctor() ;

/// @brief Method .ctor addr 0x2353c5c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack(__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack(__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::QuickPlaySongPacksOverride
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4479))
// CS Name: ::QuickPlaySetupData::QuickPlaySongPacksOverride*
class CORDL_TYPE __QuickPlaySetupData__QuickPlaySongPacksOverride : public ::System::Object {
public:
// Declarations
using PredefinedPack = ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;

using LocalizedCustomPack = ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;

using LocalizedCustomPackName = ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field predefinedPackIds offset 0x10
 __declspec(property(get=__get_predefinedPackIds, put=__set_predefinedPackIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>*  predefinedPackIds;

/// @brief Field localizedCustomPacks offset 0x18
 __declspec(property(get=__get_localizedCustomPacks, put=__set_localizedCustomPacks)) ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>*  localizedCustomPacks;

constexpr void __set_predefinedPackIds(::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>* __get_predefinedPackIds() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>*> __get_predefinedPackIds() const;

constexpr void __set_localizedCustomPacks(::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>* __get_localizedCustomPacks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>*> __get_localizedCustomPacks() const;

static inline ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* New_ctor() ;

/// @brief Method .ctor addr 0x2353b14 size 0xc0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__QuickPlaySetupData__QuickPlaySongPacksOverride(__QuickPlaySetupData__QuickPlaySongPacksOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupData__QuickPlaySongPacksOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__QuickPlaySetupData__QuickPlaySongPacksOverride(__QuickPlaySetupData__QuickPlaySongPacksOverride const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __QuickPlaySetupData__QuickPlaySongPacksOverride()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::QuickPlaySetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4480))
// CS Name: ::QuickPlaySetupData*
class CORDL_TYPE QuickPlaySetupData : public ::System::Object {
public:
// Declarations
using QuickPlaySongPacksOverride = ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field quickPlayAvailablePacksOverride offset 0x10
 __declspec(property(get=__get_quickPlayAvailablePacksOverride, put=__set_quickPlayAvailablePacksOverride)) ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*  quickPlayAvailablePacksOverride;

 __declspec(property(get=get_hasOverride)) bool  hasOverride;

constexpr void __set_quickPlayAvailablePacksOverride(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*  value) ;

constexpr ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* __get_quickPlayAvailablePacksOverride() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*> __get_quickPlayAvailablePacksOverride() const;

/// @brief Method get_hasOverride addr 0x2353a84 size 0x88 virtual false final false
inline bool get_hasOverride() ;

static inline ::GlobalNamespace::QuickPlaySetupData* New_ctor() ;

/// @brief Method .ctor addr 0x2353b0c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuickPlaySetupData(QuickPlaySetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuickPlaySetupData(QuickPlaySetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 QuickPlaySetupData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySetupData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupData*, "", "QuickPlaySetupData");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack");
