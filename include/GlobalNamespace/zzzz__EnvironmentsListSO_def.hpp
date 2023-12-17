#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentsListSO)
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentsListSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentsListSO);
// Type: ::EnvironmentsListSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4181))
// CS Name: ::EnvironmentsListSO*
class CORDL_TYPE EnvironmentsListSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _environmentInfos offset 0x18
 __declspec(property(get=__get__environmentInfos, put=__set__environmentInfos)) ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  _environmentInfos;

 __declspec(property(get=get_environmentInfos)) ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  environmentInfos;

constexpr void __set__environmentInfos(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>& __get__environmentInfos() ;

constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*> const& __get__environmentInfos() const;

/// @brief Method get_environmentInfos addr 0x2240928 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos() ;

/// @brief Method GetEnvironmentInfoBySerializedName addr 0x2240930 size 0x80 virtual false final false
inline ::GlobalNamespace::EnvironmentInfoSO* GetEnvironmentInfoBySerializedName(::StringW  environmentSerializedName) ;

/// @brief Method GetAllEnvironmentInfosWithType addr 0x22409b0 size 0x178 virtual false final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>* GetAllEnvironmentInfosWithType(::GlobalNamespace::EnvironmentTypeSO*  environmentType) ;

/// @brief Method GetFirstEnvironmentInfoWithType addr 0x2240b28 size 0x84 virtual false final false
inline ::GlobalNamespace::EnvironmentInfoSO* GetFirstEnvironmentInfoWithType(::GlobalNamespace::EnvironmentTypeSO*  environmentType) ;

/// @brief Method GetLastEnvironmentInfoWithType addr 0x2240bac size 0x80 virtual false final false
inline ::GlobalNamespace::EnvironmentInfoSO* GetLastEnvironmentInfoWithType(::GlobalNamespace::EnvironmentTypeSO*  environmentType) ;

static inline ::GlobalNamespace::EnvironmentsListSO* New_ctor() ;

/// @brief Method .ctor addr 0x2240c2c size 0x1008 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentsListSO(EnvironmentsListSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentsListSO(EnvironmentsListSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentsListSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentsListSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentsListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentsListSO*, "", "EnvironmentsListSO");
