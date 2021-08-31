// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.ILateDisposable
#include "Zenject/ILateDisposable.hpp"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: Zenject.ILateTickable
#include "Zenject/ILateTickable.hpp"
// Including type: Zenject.IFixedTickable
#include "Zenject/IFixedTickable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: TickableManager
  class TickableManager;
  // Forward declaring type: InitializableManager
  class InitializableManager;
  // Forward declaring type: DisposableManager
  class DisposableManager;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Kernel
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  class Kernel : public ::Il2CppObject/*, public System::IDisposable, public Zenject::ILateDisposable, public Zenject::IInitializable, public Zenject::ITickable, public Zenject::ILateTickable, public Zenject::IFixedTickable*/ {
    public:
    // [InjectLocalAttribute] Offset: 0xDFEC5C
    // private Zenject.TickableManager _tickableManager
    // Size: 0x8
    // Offset: 0x10
    Zenject::TickableManager* tickableManager;
    // Field size check
    static_assert(sizeof(Zenject::TickableManager*) == 0x8);
    // [InjectLocalAttribute] Offset: 0xDFEC6C
    // private Zenject.InitializableManager _initializableManager
    // Size: 0x8
    // Offset: 0x18
    Zenject::InitializableManager* initializableManager;
    // Field size check
    static_assert(sizeof(Zenject::InitializableManager*) == 0x8);
    // [InjectLocalAttribute] Offset: 0xDFEC7C
    // private Zenject.DisposableManager _disposablesManager
    // Size: 0x8
    // Offset: 0x20
    Zenject::DisposableManager* disposablesManager;
    // Field size check
    static_assert(sizeof(Zenject::DisposableManager*) == 0x8);
    // Creating value type constructor for type: Kernel
    Kernel(Zenject::TickableManager* tickableManager_ = {}, Zenject::InitializableManager* initializableManager_ = {}, Zenject::DisposableManager* disposablesManager_ = {}) noexcept : tickableManager{tickableManager_}, initializableManager{initializableManager_}, disposablesManager{disposablesManager_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::ILateDisposable
    operator Zenject::ILateDisposable() noexcept {
      return *reinterpret_cast<Zenject::ILateDisposable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IInitializable
    operator Zenject::IInitializable() noexcept {
      return *reinterpret_cast<Zenject::IInitializable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::ITickable
    operator Zenject::ITickable() noexcept {
      return *reinterpret_cast<Zenject::ITickable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::ILateTickable
    operator Zenject::ILateTickable() noexcept {
      return *reinterpret_cast<Zenject::ILateTickable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IFixedTickable
    operator Zenject::IFixedTickable() noexcept {
      return *reinterpret_cast<Zenject::IFixedTickable*>(this);
    }
    // Get instance field: private Zenject.TickableManager _tickableManager
    Zenject::TickableManager* _get__tickableManager();
    // Set instance field: private Zenject.TickableManager _tickableManager
    void _set__tickableManager(Zenject::TickableManager* value);
    // Get instance field: private Zenject.InitializableManager _initializableManager
    Zenject::InitializableManager* _get__initializableManager();
    // Set instance field: private Zenject.InitializableManager _initializableManager
    void _set__initializableManager(Zenject::InitializableManager* value);
    // Get instance field: private Zenject.DisposableManager _disposablesManager
    Zenject::DisposableManager* _get__disposablesManager();
    // Set instance field: private Zenject.DisposableManager _disposablesManager
    void _set__disposablesManager(Zenject::DisposableManager* value);
    // public System.Void Initialize()
    // Offset: 0x1712B0C
    void Initialize();
    // public System.Void Dispose()
    // Offset: 0x1712B28
    void Dispose();
    // public System.Void LateDispose()
    // Offset: 0x1712B44
    void LateDispose();
    // public System.Void Tick()
    // Offset: 0x1712B60
    void Tick();
    // public System.Void LateTick()
    // Offset: 0x1712BFC
    void LateTick();
    // public System.Void FixedTick()
    // Offset: 0x1712C98
    void FixedTick();
    // public System.Void .ctor()
    // Offset: 0x1712D34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Kernel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Kernel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Kernel*, creationType>()));
    }
  }; // Zenject.Kernel
  #pragma pack(pop)
  static check_size<sizeof(Kernel), 32 + sizeof(Zenject::DisposableManager*)> __Zenject_KernelSizeCheck;
  static_assert(sizeof(Kernel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Kernel*, "Zenject", "Kernel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Kernel::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::LateDispose
// Il2CppName: LateDispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::LateDispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "LateDispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::LateTick
// Il2CppName: LateTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::LateTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "LateTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::FixedTick
// Il2CppName: FixedTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Kernel::*)()>(&Zenject::Kernel::FixedTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Kernel*), "FixedTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Kernel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
