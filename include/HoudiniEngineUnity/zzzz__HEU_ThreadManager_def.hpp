#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_ThreadManager)
namespace HoudiniEngineUnity {
class HEU_ThreadedTask;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ThreadManager;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ThreadManager);
// Type: HoudiniEngineUnity::HEU_ThreadManager
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9817))
// CS Name: ::HoudiniEngineUnity::HEU_ThreadManager*
class CORDL_TYPE HEU_ThreadManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _tasks offset 0x10
 __declspec(property(get=__get__tasks, put=__set__tasks)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*  _tasks;

/// @brief Field _pendingAdd offset 0x18
 __declspec(property(get=__get__pendingAdd, put=__set__pendingAdd)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*  _pendingAdd;

/// @brief Field _pendingRemove offset 0x20
 __declspec(property(get=__get__pendingRemove, put=__set__pendingRemove)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*  _pendingRemove;

static inline void setStaticF__instance(::HoudiniEngineUnity::HEU_ThreadManager*  value) ;

static inline ::HoudiniEngineUnity::HEU_ThreadManager* getStaticF__instance() ;

constexpr void __set__tasks(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* __get__tasks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*> __get__tasks() const;

constexpr void __set__pendingAdd(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* __get__pendingAdd() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*> __get__pendingAdd() const;

constexpr void __set__pendingRemove(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* __get__pendingRemove() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*> __get__pendingRemove() const;

/// @brief Method get_Instance addr 0x21b1018 size 0x48 virtual false final false
static inline ::HoudiniEngineUnity::HEU_ThreadManager* get_Instance() ;

/// @brief Method CreateInstance addr 0x21b1060 size 0x4 virtual false final false
static inline void CreateInstance() ;

/// @brief Method Finalize addr 0x21b1064 size 0x8 virtual true final false
inline void Finalize() ;

/// @brief Method Register addr 0x21b1070 size 0x4 virtual false final false
inline void Register() ;

/// @brief Method Unregister addr 0x21b106c size 0x4 virtual false final false
inline void Unregister() ;

/// @brief Method Update addr 0x21b1074 size 0x3d4 virtual false final false
inline void Update() ;

/// @brief Method AddTask addr 0x21b1448 size 0xec virtual false final false
inline void AddTask(::HoudiniEngineUnity::HEU_ThreadedTask*  task) ;

/// @brief Method RemoveTask addr 0x21b1534 size 0xec virtual false final false
inline void RemoveTask(::HoudiniEngineUnity::HEU_ThreadedTask*  task) ;

static inline ::HoudiniEngineUnity::HEU_ThreadManager* New_ctor() ;

/// @brief Method .ctor addr 0x21b1620 size 0xbc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_ThreadManager(HEU_ThreadManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_ThreadManager(HEU_ThreadManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_ThreadManager()  = default;
public:


// Fields

// Static field _instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ThreadManager, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ThreadManager);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ThreadManager*, "HoudiniEngineUnity", "HEU_ThreadManager");
